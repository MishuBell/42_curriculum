#include "libft.h"
#include <stdio.h>

int lsb(int c);

int main()
{
    int grade = 1;
    printf("Out %d", lsb(grade));
}

int lsb(int c)
{
    return c & 0x01;
}





