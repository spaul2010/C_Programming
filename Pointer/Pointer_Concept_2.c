/*
    Simple Pointer Concept - Example Program

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=3;
    int *j;
    int **k;

    j = &i;
    k = &j;

    // Address of i
    printf("\nAddress of i = %u", &i);
    printf("\nAddress of i = %u", j);
    printf("\nAddress of i = %u", *k);

    // Address of j
    printf("\nAddress of j = %u", &j);
    printf("\nAddress of j = %u", k);

    // Address of k
    printf("\nAddress of k = %u", &k);

    // Value of j, k
    printf("\nValue of j = %u", j);
    printf("\nValue of k = %u", k);

    // Value of i
    printf("\nValue of i = %d", i);
    printf("\nValue of i = %d", *(&i));
    printf("\nValue of i = %d", *j);
    printf("\nValue of i = %d", **k);

    return 0;
}
