/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfakih <mfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 21:27:22 by mfakih            #+#    #+#             */
/*   Updated: 2026/01/06 21:27:28 by mfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int main(int argc, char **argv)
{
    int i;
    char c;

    i = 0;
    if (argc == 4 && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
    {
        while (argv[1][i])
        {
            c = argv[1][i];
            if (c == argv[2][0])
                c = argv[3][0];
            write (1, &c, 1);
            i++;
        }
    }
    write (1, "\n", 1);
}