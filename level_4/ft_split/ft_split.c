/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfakih <mfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 15:38:27 by mfakih            #+#    #+#             */
/*   Updated: 2026/01/13 16:39:01 by mfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int count_words(char *str)
{
    int i;
    int words;
    
    i = 0;
    words = 0;
    while (str[i])
    {
        while (str[i] && (str[i] == 32 || str[i] == 9 || str[i] == '\n'))
            i++;
        if (!(str[i] == 32 || str[i] == 9 || str[i] == '\n' || str[i] == '\0'))
            words++;
        while (str[i] && !(str[i] == 32 || str[i] == 9 || str[i] == '\n'))
            i++;
    }
    return (words);
}

char    **ft_split(char *str)
{
    int i;
    int j;
    int k;
    int l;
    char **n;

    i = 0;
    k = 0;
    n = malloc ((count_words(str) + 1)* sizeof(char *));
    while (str[i])
    {
        while (str[i] && (str[i] == 32 || str[i] == 9 || str[i] == '\n'))
            i++;
        j = i;
        while (str[j] && !(str[j] == 32 || str[j] == 9 || str[j] == '\n'))
            j++;
        if (i < j)
        {    
            n[k] = malloc(j - i);
            if (!n[k])
                return (NULL);
        }
        else
            continue;
        l = 0;
        while (i < j && str[i])
            n[k][l++] = str[i++];
        n[k][l] = '\0';
        k++;
    }
    n[k] = NULL;
    return (n);
}

// #include <stdio.h>

// int main(int argc, char **argv)
// {
//     if (argc > 1)
//     {    
//         printf("%i\n", count_words(argv[1]));
//         char ** n = ft_split(argv[1]);
//         int i = 0;
//         while (n[i])
//         {
//             printf("%s ",n[i]);
//             i++;
//         }
//     }
// }