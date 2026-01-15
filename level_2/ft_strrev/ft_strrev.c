char    *ft_strrev(char *str)
{
    int i;
    int len;
    char temp;

    i = 0;
    len = 0;
    while (str[len])
        len++;
    len--;
    while (i <= len / 2 )
    {
        temp = str[i];
        str[i] = str[len - i];
        str[len - i] = temp;
        i++;
    }
    return (str);
}

// #include <stdio.h>

// int main(int argc, char **argv)
// {
//     if (argc == 2)
//     {
//         char *c = ft_strrev(argv[1]);
//         printf("%s", c);
//     }
// }