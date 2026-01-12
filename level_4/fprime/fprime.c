#include <stdlib.h>
#include <stdio.h>

int is_prime(int i)
{
    int j = 2;

    if (i == 0 || i == 1)
        return (0);
    while (j * j <= i)
    {
        if (i % j == 0)
            return (0);
        j++;
    }
    return (1);
}

int main(int argc, char **argv)
{
    int i;
    int j;
    int first;

    i = 0;
    j = 2;
    first = 1;
    if (argc == 2)
    {
        i = atoi(argv[1]);
        if (i == 1)
            printf("1");
        else
        {
            while (j <= i)
            {
                if (i % j == 0)
                {
                    if (is_prime(j))
                    {
                        if (first == 1)
                            first = 0;
                        else if (first == 0)
                            printf("*");
                        printf("%i",j);
                    }
                    i /= j;
                    j = 2;
                }
                j++;
            }
        }
    }
    printf("\n");
    return (0);
}