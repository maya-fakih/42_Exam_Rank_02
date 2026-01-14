int find_index(char c, int b)
{
    int i = 0;
    char *base_lower = "0123456789abcdef";
    char *base_upper = "0123456789ABCDEF";

    while (base_lower[i] && i < b )
    {
        if (base_lower[i] == c)
            return (i);
        i++;
    }
    i = 0;
    while (base_upper[i] && i < b)
    {
        if (base_upper[i] == c)
            return (i);
        i++;
    }
    return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int nb = 0;
    int sign = 1;
    if (!str || str[0] == '\0')
        return (0);
    if (str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    while (str[i] && find_index(str[i], str_base) != -1)
    {
        nb = nb * str_base + find_index(str[i], str_base);
        i++;
    }
    return (nb * sign);
}

// #include <stdio.h>

// int main(int argc, char **argv)
// {
//     if (argc == 2)
//         printf("%i", ft_atoi_base(argv[1], 2));
    
// }
