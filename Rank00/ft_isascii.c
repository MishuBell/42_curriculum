#include "libft.h"

/*
Returns true if c is a 7-bit unsigned char value that fits into the US/UK ASCII
 character set. This function is a BSD extension and is also an SVID extension.
*/

int ft_isascii(int c)
{
    return (c >= 0 && c <= 127);
}
