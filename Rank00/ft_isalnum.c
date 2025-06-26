#include "libft.h"
/*
Gibt true zurück, wenn c ein alphanumerisches Zeichen ist
*/

int ft_isalnum(int c)
{
    return ft_isalpha(c) || ft_isdigit(c);
}
