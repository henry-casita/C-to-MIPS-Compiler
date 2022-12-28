CPPFLAGS += -std=c++17 -W -Wall -g -Wno-unused-parameter
CPPFLAGS += -I include

bin/c_compiler : bin/compiler src/wrapper.sh
	cp src/wrapper.sh bin/c_compiler
	chmod u+x bin/c_compiler

src/parser.tab.cpp : src/parser.y
	bison -v -d src/parser.y -o src/parser.tab.cpp

src/lexer.yy.cpp : src/lexer.flex src/parser.tab.hpp
	flex -o src/lexer.yy.cpp src/lexer.flex

#bin/compiler : src/compiler.o src/parser.tab.o src/lexer.yy.o src/parser.tab.o
#	mkdir -p bin
#	g++ $(CPPFLAGS) -o bin/compiler $^

bin/compiler : src/compiler.cpp src/parser.tab.cpp src/lexer.yy.cpp 
	mkdir -p bin
	g++ $(CPPFLAGS) -o bin/compiler $^

clean :
	rm -rf bin/*
	rm -rf out/*
	rm -f src/*.tab.hpp
	rm -f src/*.tab.cpp
	rm -f src/*.yy.cpp
	rm -f src/*.output*.o
