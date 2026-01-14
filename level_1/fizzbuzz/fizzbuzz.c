/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfakih <mfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 21:18:44 by mfakih            #+#    #+#             */
/*   Updated: 2026/01/06 21:19:52 by mfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_put_nbr_base(int i, char *base)
{
    char    digit;
    int     base_n;

    //find base length
    base_n = 0;
    while (base[base_n])
        base_n++;
    if (i >= base_n)
        ft_put_nbr_base(i / base_n, base);
    digit = base[i % base_n];
    write (1, &digit, 1);
}

int main()
{
    int i;

    i = 1;
    while (i <= 100)
    {
        if (((i % 3 )== 0 )&& ((i % 5) == 0))
            write (1, "fizzbuzz", 8);
        else if ((i % 3) == 0)
            write (1, "fizz", 4);
        else if ((i % 5 )== 0)
            write (1, "buzz", 4);
        else
            ft_put_nbr_base(i, "0123456789");
        write (1, "\n", 1);
        i++;
    }
}
