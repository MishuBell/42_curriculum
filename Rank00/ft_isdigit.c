#include "libft.h"
/*
Returns true if c is a decimal digit (‘0’ through ‘9’).

(unsigned c)c       cast to unsigned, to guarantee a positive value
c - '0'             The ASCII value of '0' is 48
                    Any ASCII char from '0' to '9', is subtracted by '0' results in its integer representation
                    '7' (55) - '0' (48) = 7

*/

int ft_isdigit(int c)
{
    return (unsigned)c - '0' <10;
}