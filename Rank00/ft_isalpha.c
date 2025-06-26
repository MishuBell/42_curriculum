#include "libft.h"

/*
Gibt true zurück, wenn der übergebene Wert c entweder ein Kleinbuchstabe (a-z) oder Großbuchstabe (A-Z) ist

(unsigned)c
    macht aus c eine positive Zahl, entfernt mögl. negatives Vorzeichen
c | 32
    Setzt das 6. Bit, das Groß/Kleinschreibung in ASCII darstellt
- 'a'
    subtrahiert 97 um einen Wert zwischen 0 und 25 zu erhalten
    25 Buchstaben hat das Alphabet
<26 
    prüft ob der Wert zwischen 0 und 25 liegt

*/

int ft_isalpha(int c)
{
    return ((unsigned)c|32)-'a' < 26;
}

