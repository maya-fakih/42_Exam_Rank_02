#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int gcd (int i, int j)
{
    if (j == 0)
        return (i);
    gcd(j / i, i);
}

int main(int argc, char **argv)
{
    int i;
    int j;
    int g;

    if (argc == 3)
    {
        i = atoi(argv[1]);
        j = atoi(argv[2]);
        g = gcd(i, j);
        printf("%i\n", g);
    }
    write (1, "\n", 1);
    return (0);
}