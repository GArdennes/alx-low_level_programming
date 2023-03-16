0x0C - C malloc

This directory contains programs written in C language that demonstrate the use of dynamic memory allocation using malloc, and free functions.

Programs
0-create_array.c - A function that creates an array of chars, and initializes it with a specific char.
1-strdup.c - A function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
2-str_concat.c - A function that concatenates two strings.
3-alloc_grid.c - A function that returns a pointer to a 2D array of integers.
4-free_grid.c - A function that frees a 2D array previously created by the alloc_grid function.
100-argstostr.c - A function that concatenates all the arguments of a program.
101-strtow.c - A function that splits a string into words.

Getting Started
To run these programs, you will need to have a C compiler installed on your machine, such as gcc. You can compile the programs using the following command:
$ gcc -Wall -Werror -Wextra -pedantic *.c -o program_name
Replace program_name with the name you want to give to the compiled program.

Usage
To run a program, simply type its name followed by any arguments it requires. For example:
$ ./program_name argument1 argument2 ...

Author
Kevin Afachao
