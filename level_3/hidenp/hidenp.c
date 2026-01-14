#include <unistd.h>

int str_chr(char *s1, char *s2)
{
    int i = 0;
    int j = 0;

    while (s2[i] && s1[j])
    {
        if (s1[j] == s2[i])
        {
            j++;
        }
        i++;
    }
    if (s1[j] == '\0')
        return (1);
    else 
        return (0);
}

int main(int argc, char **argv)
{
    char c;

    if (argc == 3)
    {
        if (argv[1][0] == 0)
            c = 1;
        else
            c = str_chr(argv[1], argv[2]) + '0';
        write (1, &c, 1);
    }
    write (1, "\n", 1);
    return (0);
}
