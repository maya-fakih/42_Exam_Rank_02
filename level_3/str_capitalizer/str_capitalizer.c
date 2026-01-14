#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    char c;

    i = 1;
    if (argc > 1)
    {
        while (i < argc)
        {
            j = 0;
            while (argv[i][j])
            {
                c = argv[i][j];
                if (j == 0)
                {
                    if (c >= 'a' && c <= 'z')
                        c -= 32;
                }
                else if ((c >= 'a' && c <= 'z'))
                {
                    if ((argv[i][j - 1] == 9 || argv[i][j - 1] == 32))
                        c -= 32;
                }
                else if (c >= 'A' && c <= 'Z')
                {
                    if (!(argv[i][j - 1] == 9 || argv[i][j - 1] == 32))
                        c += 32;
                }
                write (1, &c, 1);
                j++;
            }
            write (1, "\n", 1);
            i++;
        }
    }
    else 
        write (1, "\n", 1);
}
