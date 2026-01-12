#include <stdio.h>
#include <stdlib.h>

int count_values(int nbr)
{
    int temp = nbr;
    int values = 0;

    if(nbr == 0)
        return (1);
    while (temp != 0)
    {
        temp /= 10;
        values ++;
    }
    return (values);
}

char	*ft_itoa(int nbr)
{
    char *num;
    int values;
    int negative;

    negative = 0;
    if (nbr < 0)
    {
        nbr *= -1;
        negative = 1;
    }
    values = count_values(nbr) + negative;
    num = malloc((values + 1)*sizeof(char));
    if (!num)
        return (NULL);
    if (nbr == 0)
    {
        num[0] = '0';
        num[1] = 0;
        return (num);
    }
    if (negative)
    {
        num[0] = '-';
    }
    num[values] = '\0';
    values--;
    while (values >= negative)
    {
        num[values] = nbr %10 + '0';
        nbr /=10;
        values--;
    }
    return (num);
}

