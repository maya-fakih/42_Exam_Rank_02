#include <stdlib.h>

int is_regected(char c, const char *reject)
{
    int i = 0;
    while (reject[i])
    {
        if ( c == reject[i])
            return (1);
        i++;
    }
    return(0);
}
size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i;

    i = 0;
    while (s[i] && !is_regected(s[i], reject))
        i++;
    return (i);
}