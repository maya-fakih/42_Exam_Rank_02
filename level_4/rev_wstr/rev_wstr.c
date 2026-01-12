#include <unistd.h>

int main(int argc, char const *argv[])
{
    int i;
    int k;

    i = 0;
    k = 0;
    if(argc == 2)
    {
        while (argv[1][i])
            i++;
        i--;
        while ( i >= 0)
        {
            while (argv[1][i] == 32 || argv[1][i] == 9)
                i--;
            while (i >= 0 && argv[1][i] != 32 && argv[1][i] != 9)
                i--;
            k = i + 1;
            while (argv[1][k] && argv[1][k] != 32 && argv[1][k] != 9)
            {
                write (1, &argv[1][k], 1);
                k++;
            }
            if (i > 0)
                write (1, " ", 1);
        }
    }
    write(1, "\n", 1);
    return 0;
}
