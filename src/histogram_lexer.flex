%option noyywrap

%{
/* Now in a section of C that will be embedded
   into the auto-generated code. Flex will not
   try to interpret code surrounded by %{ ... %} */

/* Bring in our declarations for token types and
   the yylval variable. */
#include "histogram.hpp"


// This is to work around an irritating bug in Flex
// https://stackoverflow.com/questions/46213840/get-rid-of-warning-implicit-declaration-of-function-fileno-in-flex
extern "C" int fileno(FILE *stream);

/* End the embedded code section. */
%}


%%

-?[0-9]+|-?[0-9]+"."[0-9]+       { fprintf(stderr, "Number : %s\n", yytext); /* TODO: get value out of yytext and into yylval.numberValue */ yylval.numberValue = atof(yytext);  return Number; }

-?[0-9]+"/"[0-9]+                { fprintf(stderr, "Number : %s\n", yytext); std::string temp(yytext);
                                    int delimiter = temp.find('/');
                                    std::string numerator = temp.substr(0, delimiter);
                                    std::string denominator = temp.substr(delimiter+1, temp.size()-delimiter-1);
                                    yylval.numberValue = (std::stod(numerator)/std::stod(denominator));
                                    return Number; }

[a-z]+|[A-Z]+|[a-zA-Z]+          { fprintf(stderr, "Word : %s\n", yytext); /* TODO: get value out of yytext and into yylval.wordValue */ yylval.wordValue = new std::string;
                                    std::string str(yytext);
                                    *yylval.wordValue = str ;  return Word; }

"["([^]])*"]"                          { fprintf(stderr, "Word : %s\n", yytext); /* TODO: get value out of yytext and into yylval.wordValue */ yylval.wordValue = new std::string;
                                    std::string str(yytext);
                                    str = str.substr(1, str.size()-2);
                                    *yylval.wordValue = str ;  return Word; }

\n                               { fprintf(stderr, "Newline\n"); }

.                                { fprintf(stderr, "unmatched\n"); }
%%

/* Error handler. This will get called if none of the rules match. */
void yyerror (char const *s)

{
   fprintf (stderr, "Flex Error: %s\n", s); /* s is the text that wasn't matched */
   exit(1);
}

