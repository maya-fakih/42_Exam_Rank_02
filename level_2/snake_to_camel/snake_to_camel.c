#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    char c;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            c = argv[1][i];
            if (i == 0)
            {
                if (c >= 'A' && c <= 'Z')
                    c += 32;
            }
            else if((c >= 'a' && c <= 'z') && argv[1][i - 1] == '_')
                c -= 32;
            
            if (c != '_')
                write (1, &c, 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}