0x0F. C - Function pointers

Tasks
0. What's my name 
- function that prints a name.
- file name 0-print_name.c 

1. If you spend too much time thinking about a thing, you'll never get it done
- function that executes a function given as a parameter on each element of an array.
- file name 1-array_iterator.c

2. To hell with circumstances; I create opportunities 
- function that searches for an integer.
- file name 2-int_index.c

3. A goal is not always meant to be reached, it often serves simply as something to aim at
- program that performs simple operations.
- Usage: calc num1 operator num2

* This task requires four different files.
1. 3-calc.h
- This file should contain all the function prototypes and data structures used by the program
 
2. 3-op_functions.c
- This file should contain the 5 following functions (not more):
   - op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
   - op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
   - op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
   - op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
   - op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);

3. 3-get_op_func.c
- This file should contain the function that selects the correct function to perform the operation asked by the user.

4. 3-main.c
- This file should contains main function only
