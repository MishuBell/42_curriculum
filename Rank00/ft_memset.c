#include <stddef.h>


void * ft_memset (void *block, int c, size_t size)
{
    unsigned char *ptr = (unsigned char *)block;
    for (int i = 0; i < size; i++)
    {
        ptr[i] = (unsigned char)c;
    }
}