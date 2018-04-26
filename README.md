# HTI-helper
A library that make it easy for getting user inputs

# Why
getting user inputs in C isn't an easy task as you expect.

to get strings in C you have to write some low level code stuff like allocating some memeory space for the inputted characters,

manuplating them using pointers to remember heap storage in stack frame and free it later.

this process may cause some frustrution for beginner students specially when dealing with pointers at the beggining.

that library help students implement their ideas without worring about how these functions implemented under the hood!

# other feature
implemented with this library a Makefile to handling providing required command line arguments to C linux compiler

so when compiling code with built in cc linux compile command students don't need to provide CL arguments like cc -o filename filename.c warning-flags debugging-flags .....

so this file can include all of that and only students compile just using make command and filename without extention.

$ make hello => this will produce executable file called hello not assembly default a.out.
