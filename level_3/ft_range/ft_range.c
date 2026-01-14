#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *nbs;
    int i = 0;

    if (start == end)
        nbs = malloc (1 *sizeof(int));
    else if (start < end)
    {    
        nbs = malloc((end -start) * sizeof(int));
        while (start <= end)
            nbs[i++] = start++;
    }
    else if (start > end)
    {
        nbs = malloc((start - end) * sizeof(int));
        while (start >= end)
            nbs[i++] = start--;
    }
    return (nbs);
}

// #include <stdio.h>

// int main(int argc, char **argv)
// {
//     if (argc == 3)
//     {
//         int start = atoi(argv[1]);
//         int end = atoi (argv[2]);
//         int *nbs = ft_range(start, end);
//         int i = 0;
//         while ( i < 3)
//         {
//             printf("%i\n",nbs[i]);
//             i++;
//         }
//     }
//     return (0);
// }

