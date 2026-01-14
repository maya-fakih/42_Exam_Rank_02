#include <unistd.h>

void itoa_base(int n, char *base)
{
    int b = 0;
    while (base[b])
        b++;
    if(n >= b)
        itoa_base(n / b, base);
    write(1, &base[n % b],1);
    return ;
}

int atoi(char *nb)
{
    int n;
    int i;

    i = 0;
    n = 0;
    while (nb[i])
        n = (n * 10) + (nb[i++] - '0');
    return (n);
}

int main(int argc, char **argv)
{
    int n;

    if(argc == 2)
    {
        n = atoi(argv[1]);
        itoa_base(n , "0123456789abcdef");
    }
    write(1, "\n", 1);
    return (0);
}
