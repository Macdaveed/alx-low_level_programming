#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */

void print_numbers(char *separator, const char *format, const unsigned int n, ...)
{
    va_list nums;
    va_start(nums, n);

    if (separator != NULL) {
        va_list copy;
        va_copy(copy, nums);

        for (unsigned int i = 0; i < n; i++) {
            vprintf(format, copy);

            if (i != n - 1) {
                printf("%s", separator);
            }
        }

        va_end(copy);
    }

    printf("\n");
    va_end(nums);
}

