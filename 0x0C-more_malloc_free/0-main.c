#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
<<<<<<< HEAD
/**
* main - check the code
*
* Return: Always 0.
*/
=======

/**
 * main - check the code
 *
 * Return: Always 0.
 */
>>>>>>> d2fcb65a9e0d453ae0744f47d5314ac6d8441845
int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(sizeof(char) * 1024);
    printf("%p\n", (void *)c);
    i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    d = malloc_checked(INT_MAX);
    printf("%p\n", (void *)d);
    free(c);
    free(i);
    free(f);
    free(d);
    return (0);
}
