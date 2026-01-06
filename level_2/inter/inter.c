/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfakih <mfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 21:47:01 by mfakih            #+#    #+#             */
/*   Updated: 2026/01/06 21:50:33 by mfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

int main(int argc, char **argv)
{
    int i;
    int j;
    int k;
    int l;
    char *output;

    i = 0;
    j = 0;
    k = 0;
    l = 0;
    if (argc == 3)
    {
        output = malloc(ft_strlen(argv[1]));
        output[0] = 0;
        while (argv[1][i])
        {
            j = 0;
            while (argv[2][j])
            {
                if (argv[1][i] == argv[2][j])
                {
                    l = 0;
                    while (output[l] != argv[1][i] && output[l])
                        l++;
                    if (output[l] == 0)
                    {
                        output[k] = argv[1][i];
                        k++;
                        output[k] = 0;
                        break ;
                    }
                }
                j++;
            }
            i++;
        }
        i = 0;
        while (output[i])
        {
            write (1, &output[i], 1);
            i++;
        }
        free(output);
    }
    write (1, "\n", 1);
}
