C to MIPS Compiler
==================

This repository contains the preprocessed C90 to MIPS assembly compiler produced as part of the EIE 2nd Year Instruction Set Architecture and Compilers coursework completed in Spring 2022 by me (Henry) and Luca. 

Contributors
------------
- Henry Hausamann
- Luca Chammah


Overview
--------
Our compiler can be built by calling `make bin/c_compiler` (or just `make`), and must be invoked as follows:

    bin/c_compiler -S <source-file.c> -o <dest-file.s> -V (optional)

The command-line parameters must be provided in the order outlined above (with the -V flag being optional, and used to visualise the AST / assembly produced).


admin
-----
This directory primarily contains documentation produced over the duration of the project, with [*log.md*](admin/log.md) tracking a timeline of the project goals that were set and achieved, as well as brief notes detailing our design approach. It also contains the specification for both the compiler and management components of the coursework. [*notes.md*](admin/notes.md) is a document that (very messily) contains notes about some of aspects of the coursework that were particularly difficult to implement, including stack/frame management, global variables and float implementation.


compiler_tests
--------------
This directory contains all the test cases used to evaluate the functional correctness of our compiler. Each test case has accompanying driver code with which it is tested, where the driver code should always return 0.

include
-------
This directory contains all the header files for our compiler, including the nodes used to develop our [**AST**](include/ast) which we use to generate our assembly, as well as [*context*](include/ast/context.hpp) used in code generation. The base class for our AST is [*node*](include/ast/ast_node.hpp), and all of our other AST constructs build off it, with each node serving a specific purpose in code generation, allowing a precise AST representation to be created by our parser.

src
---
This directory contains the source code for our [*parser*](src/parser.y) written in Yacc and accompanying [*lexer*](src/lexer.flex) written in flex, which are used to initially process the input source code and generate the AST. [*compiler.cpp*](src/compiler.cpp) contains the source code for our actual compiler, and mostly contains any directives needed at the start of the assembly code, as well as some formatting for visualisation.

utility scripts
-----------------------------

- [*single.sh*](single.sh) can be used to test the functionality of a particular test case. It can be invoked from the base directory as follows:
`single.sh <test_name>`
where `<test_name>` is the name of the c-file being tested, i.e. return_constant.c

- [*all.sh*](all.sh) can be used to test the functionality of all test cases. It can be invoked from the base directory as follows:
`all.sh`


