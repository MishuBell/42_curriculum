#include "libft.h"
/*
Returns true if c is a decimal digit (‘0’ through ‘9’).
Gibt true zurück, wenn c eine Dezimalziffer ist ('0' bis '9')

(unsigned)c         Cast zu unsigned, um sicherzustellen, dass der Wert positiv ist
c - '0'             Der ASCII-Wert von '0' ist 48
                    Jeder ASCII-Wert zwischen '0' und '9', der von '0' subtrahiert wird, ergibt seine numerische Darstellung
                    Beispiel: '7' (55) - '0' (48) = 7

*/

int ft_isdigit(int c)
{
    return (unsigned)c - '0' <10;
}