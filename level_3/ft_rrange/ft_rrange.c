#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int *n;
    int i = 0;

    if (start == end)
    {
        n = malloc (1 * sizeof(int));
        n[0] = start;
        return (n);
    }
    else if (start < end)
    {
        n = malloc ((end - start) * sizeof (int));
        while (end >= start)
            n[i++] = end --;
    }
    else if (start > end)
    {
        n = malloc((start - end) *sizeof (int));
        while (end <= start)
            n[i++] = end ++;
    }
    return (n);
}