/* Undefined behaviour example */

#include <stdio.h>

int main(void)
{
    int i = 0, j;

    j = i + 3;

    printf("%d\n", j);

    return 0;
}
