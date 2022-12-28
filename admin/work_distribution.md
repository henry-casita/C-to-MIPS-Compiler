Project Management:

Project management in this lab was essential to stay on top of things which needed to be done. We spent a lot of time in the labs every week to fully grasp our progress and see what had to be done in the next week for the lab and also held regular calls.

Before the lab even started, we met to discuss how we would be going about working on the project and how we would be distributing the tasks. The original plan was that Henry would take care of the code generation aspect of the task (looking which constructions are needed for different functions and operations) and Luca would take care of the lexer and parser initially. Due to quick progress on the lexer and parser, it was decided that Luca would also start work on the AST tree because it is linked with the parser.

The AST tree was by far the hardest part of the lab for us as a team. The intricacies of how the AST functioned within the parser and figuring out the different dependencies took our team a lot of time. The main difficulty was understanding was how we would do the code generation and how and where we would be writing MIPS for the compiler, how to allocate registers, how to use different contexts for different variables. 

Once we understood how all these foundational parts of our project worked, we started to build our tree. This part was done together with us first working together and then assigning tasks for each to do. We did this progressively by using tests to slowly build up the tree. The approach was simple, we would decompose the code into what it is for the parser and then look what MIPS assembly we should generate at each node of the tree. 

To stay on top of our work we had meetings twice a week to be able to understand the progress the other person was making but also to be able to collaborate on different issues we were having. In these meetings we also took note of what we had done in the past week (often not to be seen on github because we were struggling with it at the beginning) and what should be done in the coming few days. To keep track with all these things we used a Trello board to clarify and write down what had to be done but also to be able to cross out stuff we had done. 

Weekly Planning:

Week 1 (02/03-08/03)
•	We wanted to research the fundamentals of the project and understand the structure we would be using
•	Separated the tasks
•	Wanted to build the lexer and the parser

Week 2 (08/03-15/03):
•	We wanted to understand the function definition and deallocation assembly
•	Unary and Binary Assembly
•	Finished the Parser and started the AST tree (or trying to)

Week 3 (15/03-22/03):
•	Continued working on the AST tree
•	Understood register and stack allocation
•	Started working on the context for variable and function mapping
•	Started iterating through the parse tree (and starting to place MIPS assembly in it)

Week 4 (22/03-29/03):
•	Built function definitions, calls and argument calling
•	All arithmetic and logical operations were implemented in the tree
•	Rebuilt the parser because the other one was too complicated
•	Implemented logical functions















