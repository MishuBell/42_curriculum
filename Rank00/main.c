#include "libft.h"
#include <stdio.h>

int main(void)
{
    char input = '!';
    printf("Output is %i \n", ft_isalpha(input));

    int inputA = 99;
    printf("Output is %i \n", ft_isdigit(inputA));
    
    char input_c = 'c';
    int input_1 = '!';
    printf("Output is %i \n", ft_isalnum(input_1));

    ascii_table_num();
    return 0;
}

