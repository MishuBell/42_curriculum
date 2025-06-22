/*
Die Funktion strlen gibt die Länge des Strings s in Bytes zurück
*/

int ft_strlen(char *s)
{
    int len = 0;

    while (*s != '\0')
    {
        len++;
        s++;
    }

    return len;
}