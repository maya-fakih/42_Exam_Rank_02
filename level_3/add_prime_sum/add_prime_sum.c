#include <unistd.h>

int is_prime(int nb)
{
    int i = 2;

    if (nb < 2)
        return (0);
    while (i * i <= nb)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int atoi(char *s)
{
    int i = 0;
    int n = 0;
    int sign = 1;

    if (!s || s[0] == 0)
        return (0);
    while (s[i] == 32)
        i++;
    if (s[i] == '-')
    {
        sign *= -1;
        i++;
    }
    while (s[i] && s[i] >= '0' && s[i] <= '9')
    {    
        n = n * 10 + (s[i] - '0');
        i++;
    }
    return (n * sign);
}

void  itoa_base(int n, char *base)
{
    int b = 0;

    while (base[b])
        b++;
    if (n < 0)
    {
        write (1, "-", 1);
        n *= -1;
    }
    if (n >= b)
        itoa_base(n / b, base);
    write (1, &base[n % b], 1);
    return ;
}

int main(int argc, char **argv)
{
    int input;
    int sum = 0;
    char *base = "0123456789";

    if (argc == 2)
    {
        input = atoi(argv[1]);
        while (input)
        {
            if (is_prime(input))
                sum += input;
            input --;

        }
        itoa_base(sum, base);
    }
    else
        write (1, "0", 1);
    write (1, "\n", 1);
    return (0);
}
