#include "libft.h"
/*
Returns true if c is a printing character. Printing characters include all the graphic
 characters, plus the space (‘ ’) character
*/

int ft_isprint(int c)
{
    int unsigned_c = (unsigned)c;
    return (unsigned_c >= 32 && unsigned_c <= 126);
}