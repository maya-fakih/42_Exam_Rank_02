#include <unistd.h>
#include <stdlib.h>
int is_space(char c)
{
    return (c == 32 || c == 9 || c == '\n');
}

int main(int argc, char **argv)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    if (argc < 2)
        return (write(1, "\n", 1), 0);
    while (argv[1][i] && is_space(argv[1][i]))
            i++;
        j = i;
    while (argv[1][i] && !is_space(argv[1][i]))
            i++;
    while (argv[1][i])
    {
        while (is_space(argv[1][i]))
            i++;
        if (argv[1][i])
        {
            while (argv[1][i] && !is_space(argv[1][i]))
            {    
                write (1, &argv[1][i], 1);
                i++;
            }
            write (1, " ", 1);
        }
    }
    while (argv[1][j] && !is_space(argv[1][j]))
    {
        write (1, &argv[1][j], 1);
        j++;
    }
    write(1, "\n", 1);
    return (0);
}