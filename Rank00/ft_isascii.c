#include "libft.h"

/*
Gibt true zurück, wenn der übergebene Wert c ein 7-Bit ASCII-Symbol ist 
Dies umfasst alle Zeichen im Bereich von 0 bis 127, die Teil des US/UK ASCII-Zeichensatzes sind (Steuerzeichen, Buchstabe, Zahl oder Sonderzeichen)
*/

int ft_isascii(int c)
{
    return (c >= 0 && c <= 127);
}
