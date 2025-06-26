#include "libft.h"

/*
Gibt true zurück, wenn der übergebene Wert c ein 7-Bit ASCII-Symbol ist 
Dies umfasst alle Zeichen im Bereich von 0 bis 127, die Teil des US/UK ASCII-Zeichensatzes sind (Steuerzeichen, Buchstabe, Zahl oder Sonderzeichen)

0x7f
    Hex für 127, das DEL Zeichen und letztes Zeichen in der ASCII, das noch in 7 Bits passt
~
    bitweise-NICHT, kehrt 127 (01111111) um in 10000000
&
    bitweise-UND prüft das Bitpaar c und 0x7f
    das Ergebnisbit ist 1 wenn beide Bits 1 sind
!
    kehrt das Ergebnis des bitweise-UND um
    weil das Ergebnis des bitweise-UND 0 zurückgibt, wenn der Wert unter 127 ist
    und 1 zurück gibt, wenn der Wert > 128 liegt (das achte Bit)
*/

int ft_isascii(int c)
{
    return !(c&~0x7f);
}
