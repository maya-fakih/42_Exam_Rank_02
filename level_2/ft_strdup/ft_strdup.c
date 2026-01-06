/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfakih <mfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 21:33:52 by mfakih            #+#    #+#             */
/*   Updated: 2026/01/06 21:33:53 by mfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strdup(char *src)
{
    int i;
    char *dest;

    i = 0;
    while (src[i])
        i++;
    dest = malloc(i + 1);
    if (!dest)
        return (0);
    i = 0;
    while (src[i])
    {    
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}