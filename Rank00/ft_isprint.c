#include "libft.h"
/*
Gibt true zurück, wenn c ein druckbares Zeichen ist. Das sind alle lesbaren zeichen und das Leerzeichen (' ')

(unsigned)c-0x20
    Subtrahiere den 'min' Wert des Bereichs von c 
< 0x5F
    Prüfe ob c kleiner ist als der 'max' Wert des Bereichs
*/

int ft_isprint(int c)
{
    return (unsigned)c-0x20 < 0x5F;
}