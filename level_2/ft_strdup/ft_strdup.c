#include <stdlib.h>

char *ft_strdup(char *src)
{
    int i = 0;
    char *c;
    while (src[i])
        i++;
    c = malloc(i * sizeof(char));
    if (!c)
        return (0);
    i = 0;
    while (src[i])
    { 
        c[i] = src[i];
        i++;
    }
    c[i] = 0;
    return (c);
}
