/*
 * main.c - Sandbox for testing
 * 
 * To use the functions you implemented in code.c, you must include the header:
 *   #include "code.h"
 * 
 * This tells the compiler where to find the function prototypes.
 * Without this include, the compiler won't know about your functions!
 */

#include <stdio.h>
#include "code.h"

int main(void)
{
    create_abs_txt("assignment.txt", -4);
    create_fabs_txt("assignment.txt", -4.5);
    append_sqrt_txt("assignment.txt", 4);


    return 0;
}

