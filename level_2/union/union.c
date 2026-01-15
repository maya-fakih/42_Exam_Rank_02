#include <unistd.h>

int seen_before(int i, int j, char **argv, char c)
{
    int a = 0;
    int b = 0;

    while (a < i)
    {
        if (argv[1][a] == c)
            return (1);
        a++;
    }
    while (b < j)
    {
        if (argv[2][b] == c)
            return (1);
        b++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;

    if (argc == 3)
    {
        while (argv[1][i])
        {
            if (!seen_before(i, j, argv, argv[1][i]))
                write (1, &argv[1][i], 1);
            i++;
        }
        while (argv[2][j])
        {
            if (!seen_before(i, j, argv, argv[2][j]))
                write (1, &argv[2][j], 1);
            j++;
        }
    }
    write (1, "\n", 1);
    return (0);
}
