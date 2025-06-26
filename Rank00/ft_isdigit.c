#include "libft.h"
/*
Returns true if c is a decimal digit (‘0’ through ‘9’).
Gibt true zurück, wenn c eine Dezimalziffer ist ('0' bis '9')

(unsigned)c
    macht aus c eine positive Zahl, entfernt mögl. negatives Vorzeichen
c - '0'
    Zieht von c 48 ab, was den numerischen Wert von c anzeigt
    '7' (55) - '0' (48) = 7
<10
    Prüft ob der Wert zwischen 0 und 9 liegt

*/

int ft_isdigit(int c)
{
    return (unsigned)c - '0' <10;
}