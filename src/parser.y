%code requires{
  #include "ast.hpp"

  #include <cassert>
  #include <string.h>

  extern const Node *g_root; // A way of getting the AST out

  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);
}

// Represents the value associated with any kind of
// AST node.
%union{
  const Node *expr;
  double number;
  std::string *string;
  LPtr	list;
}
//hello these are test comments

%token IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS
%token NUMBER
%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%type <expr> primary_expression postfix_expression  unary_operator unary_expression cast_expression multiplicative_expression
%type <expr> additive_expression shift_expression relational_expression equality_expression and_expression exclusive_or_expression inclusive_or_expression
%type <expr> logical_and_expression logical_or_expression conditional_expression assignment_expression assignment_operator expression constant_expression declaration 
%type <expr> declaration_specifiers init_declarator storage_class_specifier type_specifier struct_or_union_specifier struct_or_union 
%type <expr> struct_declaration enum_specifier  enumerator type_qualifier declarator direct_declarator pointer 
%type <expr> parameter_declaration type_name abstract_declarator direct_abstract_declarator initializer  statement labeled_statement
%type <expr> compound_statement expression_statement selection_statement iteration_statement jump_statement external_declaration
%type <expr> function_definition program initializer_list init_declarator_list 
%type <list> argument_expression_list  struct_declaration_list translation_unit
%type <list> enumerator_list identifier_list type_qualifier_list declaration_list statement_list
%type <list>  parameter_list 
%type <number> INT
%type <string> IDENTIFIER CONSTANT




%start program
%%

primary_expression
	: IDENTIFIER {$$ = new Identifier($1); } 
	| CONSTANT {$$ = new Number($1); }
	//| STRING_LITERAL 
	| '(' expression ')' {$$ = $2; }
	;

postfix_expression
	: primary_expression { $$ = $1; }
	| postfix_expression '[' expression ']' 
	| postfix_expression '(' ')' {$$ = new FunctionCall($1,NULL);}
	| postfix_expression '(' argument_expression_list ')' {$$ = new FunctionCall($1, $3);}
	| postfix_expression '.' IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP {$$ = new Increment($1); }
	| postfix_expression DEC_OP {$$ = new Decrement($1); }
	;

argument_expression_list
	: assignment_expression {$$ = form_list($1);}
	| argument_expression_list ',' assignment_expression {$$ = add_to_list($3, $1);}
	;

unary_expression
	: postfix_expression {$$ = $1; }
	| INC_OP unary_expression {$$ = new Increment($2); }
	| DEC_OP unary_expression {$$ = new Decrement($2); }
	//| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	| '-' unary_expression { $$ = new UnaryNeg($2); }
	| '~' unary_expression { $$ = new UnaryNot($2); }
	| '!' unary_expression { $$ = new UnaryNot2($2); }
	| '+' unary_expression { $$ = $2; }

	;

/*unary_operator 
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;
*/
/*cast_expression
	: unary_expression {$$ = $1; }
	//| '(' type_name ')' cast_expression
	;*/

multiplicative_expression
	: unary_expression {$$ = $1; }
	| multiplicative_expression '*' unary_expression	{$$ = new BinaryMul($1,$3);}
	| multiplicative_expression '/' unary_expression	{$$ = new BinaryDiv($1,$3);}
	| multiplicative_expression '%' unary_expression	{$$ = new BinaryMod($1,$3);}
	;

additive_expression
	: multiplicative_expression {$$ = $1;}
	| additive_expression '+' multiplicative_expression {$$ = new BinaryAdd($1,$3);}
	| additive_expression '-' multiplicative_expression	{$$ = new BinarySub($1,$3);}
	;

shift_expression
	: additive_expression {$$ = $1;}
	| shift_expression LEFT_OP additive_expression {$$ = new LeftShift($1, $3);}
	| shift_expression RIGHT_OP additive_expression {$$ = new RightShift($1, $3);}
	;

relational_expression
	: shift_expression {$$ = $1;}
	| relational_expression '<' shift_expression { $$ = new LessThan($1, $3);}
	| relational_expression '>' shift_expression { $$ = new GreaterThan($1, $3);}
	| relational_expression LE_OP shift_expression { $$ = new LessThanEqual($1, $3); }
	| relational_expression GE_OP shift_expression { $$ = new GreaterThanEqual($1, $3); }
	;

equality_expression
	: relational_expression {$$ = $1;}
	| equality_expression EQ_OP relational_expression {$$ = new BinaryEqual($1, $3);}
	| equality_expression NE_OP relational_expression
	;

and_expression
	: equality_expression {$$ = $1;}
	| and_expression '&' equality_expression {$$ = new BinaryAnd($1, $3);}
	;

exclusive_or_expression
	: and_expression {$$ = $1;}
	| exclusive_or_expression '^' and_expression {$$ = new BinaryXor($1, $3);}
	;

inclusive_or_expression
	: exclusive_or_expression {$$ = $1;}
	| inclusive_or_expression '|' exclusive_or_expression {$$ = new BinaryOr($1, $3); }
	;

logical_and_expression
	: inclusive_or_expression {$$ = $1;}
	| logical_and_expression AND_OP inclusive_or_expression {$$ = new LogicalAnd($1, $3);}
	;

logical_or_expression
	: logical_and_expression {$$ = $1;}
	| logical_or_expression OR_OP logical_and_expression {$$ = new LogicalOr($1, $3);}
	;

conditional_expression
	: logical_or_expression {$$ = $1;}
	| logical_or_expression '?' expression ':' conditional_expression {$$ = new Conditional($1, $3, $5);}
	;

assignment_expression
	: conditional_expression {$$ = $1;}
	//| unary_expression assignment_operator assignment_expression
	| unary_expression '=' assignment_expression {$$ = new AssignmentEqual($1, $3); }
	| unary_expression MUL_ASSIGN assignment_expression {$$ = new AssignmentMul($1, $3); }
	| unary_expression DIV_ASSIGN assignment_expression {$$ = new AssignmentDiv($1, $3); }
	| unary_expression MOD_ASSIGN assignment_expression {$$ = new AssignmentMod($1, $3); }
	| unary_expression ADD_ASSIGN assignment_expression {$$ = new AssignmentAdd($1, $3); }
	| unary_expression SUB_ASSIGN assignment_expression {$$ = new AssignmentSub($1, $3); }
	| unary_expression LEFT_ASSIGN assignment_expression {$$ = new AssignmentLeft($1, $3); }
	| unary_expression RIGHT_ASSIGN assignment_expression {$$ = new AssignmentRight($1, $3); }
	| unary_expression AND_ASSIGN assignment_expression {$$ = new AssignmentAnd($1, $3); }
	| unary_expression XOR_ASSIGN assignment_expression {$$ = new AssignmentXor($1, $3); }
	| unary_expression OR_ASSIGN assignment_expression {$$ = new AssignmentOr($1, $3); }
	;

assignment_operator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression {$$ = $1;}
	//| expression ',' assignment_expression
	;

constant_expression
	: conditional_expression {$$ = $1;}
	;

declaration
	: declaration_specifiers ';'/* { $$ = new Declaration($1); } */ { $$=$1; }
	| declaration_specifiers init_declarator ';' /*{$$ = new Declaration($2); std::cout<< "do we get here" << std::endl;}*/ { $$=$2;}
	;

declaration_specifiers
	: storage_class_specifier
	| storage_class_specifier declaration_specifiers
	| type_specifier {$$ = $1; }
	| type_specifier declaration_specifiers
	| type_qualifier
	| type_qualifier declaration_specifiers
	;

/*init_declarator_list //this doesn't happen
	: init_declarator {$$ = $1; }
	//| init_declarator_list ',' init_declarator
	;*/

init_declarator
	: declarator {$$ = $1;}
	| declarator '=' initializer {$$ = new InitDeclarator($1, $3);}
	;

storage_class_specifier
	: TYPEDEF
	| EXTERN
	| STATIC
	| AUTO
	| REGISTER
	;

type_specifier
	: VOID
	| CHAR
	| SHORT
	| INT {$$ = new Typespec("int");}
	| LONG
	| FLOAT
	| DOUBLE
	| SIGNED
	| UNSIGNED
	| struct_or_union_specifier
	| enum_specifier
	| TYPE_NAME
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator //{$$ = $1;}
	//| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: declarator //{$$ = $1;}
	| ':' constant_expression
	| declarator ':' constant_expression
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM IDENTIFIER '{' enumerator_list '}'
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator //{$$ = $1;}
	| enumerator_list ',' enumerator
	;

enumerator
	: IDENTIFIER //{$$ = $1;}
	| IDENTIFIER '=' constant_expression
	;

type_qualifier
	: CONST
	| VOLATILE
	;

declarator
	: pointer direct_declarator
	| direct_declarator {$$ = $1;}
	;

direct_declarator
	: IDENTIFIER {$$ = new Identifier($1);}
	| '(' declarator ')'
	| direct_declarator '[' constant_expression ']'
	| direct_declarator '[' ']'
	| direct_declarator '(' parameter_list ')'  {$$ = new FunctionArguments($1, $3);}
	| direct_declarator '(' identifier_list ')' {$$ = $1;}
	| direct_declarator '(' ')' {$$ = $1;} //{$$ = new DirectDeclarator($1); }
	;

pointer
	: '*'
	| '*' type_qualifier_list
	| '*' pointer
	| '*' type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier //{$$ = $1;}
	| type_qualifier_list type_qualifier
	;


//parameter_type_list
	//: parameter_list {$$ = form_list($1);}
	//| parameter_list ',' ELLIPSIS
	//;

parameter_list
	: parameter_declaration {$$ = form_list($1);}
	| parameter_list ',' parameter_declaration {$$ = add_to_list($3,$1);}
	;

parameter_declaration
	: declaration_specifiers declarator {$$ = new ParameterDeclaration($1, $2);}
	| declaration_specifiers abstract_declarator 
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	//| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' constant_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' constant_expression ']'
	| '(' ')'
	| '(' parameter_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_list ')'
	;

initializer
	: assignment_expression {$$ = $1; }
	| '{' initializer_list '}'
	//| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer {$$ = $1;}
	//| initializer_list ',' initializer
	;

statement
	: labeled_statement {$$ = $1;}
	| compound_statement {$$ = $1;}
	| expression_statement {$$ = $1;}
	| selection_statement {$$ = $1;}
	| iteration_statement { $$ = $1;}

	| jump_statement {$$ = $1;}
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' '}' {$$ = new CompoundStatement(NULL, NULL);}  
	| '{' statement_list '}' {$$ = new CompoundStatement($2, NULL); }
	| '{' declaration_list '}' {$$ = new CompoundStatement(NULL, $2); }
	| '{' declaration_list statement_list '}'{$$ = new CompoundStatement ($3, $2); }
	;

declaration_list
	: declaration {$$ = form_list($1);}
	| declaration_list declaration {$$ = add_to_list($2, $1);}
	;

statement_list
	: statement {$$ = form_list($1);}
	| statement_list statement {$$ = add_to_list($2, $1); }
	;

expression_statement
	: ';'
	| expression ';'
	;

selection_statement
	: IF '(' expression ')' statement { $$ = new IfStatement($3, $5, NULL);}
	| IF '(' expression ')' statement ELSE statement { $$ = new IfStatement($3, $5, $7);}
	| SWITCH '(' expression ')' statement
	;

iteration_statement
	: WHILE '(' expression ')' statement { $$ = new While($3, $5); }
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' expression_statement expression_statement ')' statement {$$ = new ForFunction($3, $4, NULL, $6); }
	| FOR '(' expression_statement expression_statement expression ')' statement {$$ = new ForFunction($3, $4, $5, $7); }
	;

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';' {$$ = new Return($2);}
	;

translation_unit
	: external_declaration {$$ = form_list($1);}
	| translation_unit external_declaration {$$ = add_to_list($2, $1);}
	;

external_declaration

	: function_definition {$$ = $1;}
	| declaration //{$$ = new FunctionDefinition()}
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement 
	| declaration_specifiers declarator compound_statement {$$ = new FunctionDefinition ($1, $2, $3); }
	| declarator declaration_list compound_statement
	| declarator compound_statement
	;
program 
	: translation_unit { g_root= new Translation($1); }
%%
#include <stdio.h>

extern char yytext[];
extern int column;

const Node *g_root; // Definition of variable (to match declaration earlier)

const Node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
/*
yyerror(s);
char *s;
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}
*/