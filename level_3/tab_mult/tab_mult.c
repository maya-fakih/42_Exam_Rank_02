#include <unistd.h>

int atoi(char *s)
{
    int i = 0;
    int num = 0;
    int sign = 1;
    if (!s || s[0] == '\0')
        return (0);
    while (s[i] == 32)
        i++;
    if (s[i] == '-')
    {    
        sign *= -1;
        num *= -1;
    }
    while (s[i])
    {
        num = num * 10 + (s[i] - '0');
        i++;
    }
    return (num * sign);
}

void itoa_base(int n, char *base)
{
    int c;
    int i;

    i = 0;
    while (base[i])
        i++;
    if (n >= i)
        itoa_base(n / 10, base);
    c = base[n % 10];
    write (1, &c, 1);
    return ;
}

int main(int argc, char **argv)
{
    int n;
    int i;
    char *base = "0123456789";

    i = 1;
    if (argc == 2)
    {
        n = atoi(argv[1]);
        while (i < 10)
        {
            itoa_base(i, base);
            write (1, " x ", 3);
            itoa_base(n, base);
            write (1 , " = ", 3);
            itoa_base(n * i, base);
            write (1, "\n", 1);
            i++;
        }
    }
    else
        write (1, "\n", 1);
    return (0);
}
