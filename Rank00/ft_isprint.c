#include "libft.h"
/*
Gibt true zurück, wenn c ein druckbares Zeichen ist. Das sind alle lesbaren zeichen und das Leerzeichen (' ')

(unsigned)c         Cast zu unsigned, um sicherzustellen, dass der Wert positiv ist
Bereich:            ASCII-Werte von 32 (Leerzeichen) bis 126 (‚~‘)
*/

int ft_isprint(int c)
{
    int unsigned_c = (unsigned)c;
    return (unsigned_c >= 32 && unsigned_c <= 126);
}