#include <stdio.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int    i;
    unsigned int    j;

    i = 0;
    i2 = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (j < nb && src[i2] != '\0')
    {
        dest[i] = src [i2];
        i++;
        i2++;
    }
    dest[i] = '\0';
    return (dest);
}