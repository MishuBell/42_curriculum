#include "libft.h"
/*
Returns true if c is an alphanumeric character (a letter or number); in other words,
 if either isalpha or isdigit is true of a character, then isalnum is also true.
*/

int ft_isalnum(int c)
{
    return ft_isalpha(c) || ft_isdigit(c);
}