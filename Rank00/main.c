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

    char input_d = '\n';
    printf("Output is: %i \n", ft_isprint(input_d));
    
    char *input_e = "Abcdefghijklmnopqrstuvwxyz";
    printf("Output is: %i", ft_strlen(input_e));

    
    return 0;
}

