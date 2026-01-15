#include <stdlib.h>
#include <unistd.h>

void itoa(int i)
{
    char c;

    if (i < 0)
    {
        write (1, "-", 1);
        i *= -1;
    }
    if (i >= 10)
        itoa(i/10);
    c = i % 10  + '0';
    write (1, &c, 1);
}

int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc == 4)
    {
        i = atoi(argv[1]);
        j = atoi(argv[3]);

        if (argv[2][0] == '+')
            itoa(i+j);
        else if(argv[2][0] == '-')
            itoa(i - j);
        else if(argv[2][0] == '*')
            itoa(i * j);
        else if (argv[2][0] == '/')
            itoa(i / j);
        else if(argv[2][0] == '%')
            itoa(i %j);
    }
    write (1, "\n", 1);
    return (0);
}