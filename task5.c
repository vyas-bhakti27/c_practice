// Q5) Write a c code to print the byte size of basic data type.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Variables of type char occupy %lu bytes\n", sizeof(char));
    printf("Variables of type short occupy %lu bytes\n", sizeof(short));
    printf("Variables of type int occupy %lu bytes\n", sizeof(int));
    printf("Variables of type long occupy %lu bytes\n", sizeof(long));
    printf("Variables of type long long occupy %lu bytes\n", sizeof(long long));
    printf("Variables of type float occupy %lu bytes\n", sizeof(float));
    printf("Variables of type double occupy %lu bytes\n", sizeof(double));
    printf("Variables of type long double occupy %lu bytes\n", sizeof(long double));

    return 0;
}
