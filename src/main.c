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
    append_pow_txt("assignment.txt", 4, 2);
    create_ceil_floor_txt("assignment.txt", 4.5);
    append_round_txt("assignment.txt", 4.5);
    append_fmod_txt("assignment.txt", 4, 2);

    double array[] = {};

    int r1 = load_txt_values("assignment.txt", array, 4);
    clear_file("assignment.txt");



    create_abs_bin("assignment.bin", -4);
    create_fabs_bin("assignment.bin", -4.5);
    append_sqrt_bin("assignment.bin", 4);
    append_pow_bin("assignment.bin", 4, 2);
    create_ceil_floor_bin("assignment.bin", 4.5);
    append_round_bin("assignment.bin", 4.5);
    append_fmod_bin("assignment.bin", 4, 2);
    load_abs_bin("assignment.bin", 1);
    int r2 = load_bin_values("assignment.bin", array, 10);
    int r3 = load_bin_value_at("assignment.bin", 2, 1);
    long r4 = get_file_size("assignment.bin");



    return 0;
}

