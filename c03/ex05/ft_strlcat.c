#include <stdio.h>
int    ft_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    i2;
    unsigned int    dlen;
    unsigned int    slen;

    i = 0;
    i2 = 0;
    while (dest[i2] != '\0')
    {
        i2++;
    }
    dlen = i2;
    slen = ft_strlen(src);
    if (size == 0 || size <= dlen)
        return (slen + size);
    while (src [i] != '\0' && i < size - dlen - 1)
    {
        dest[i2] = src[i];
        i++;
        i2++;
    }
    dest[i2] = '\0';
    return (dlen + slen);
}