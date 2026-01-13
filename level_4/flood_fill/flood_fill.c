/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfakih <mfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:47:18 by mfakih            #+#    #+#             */
/*   Updated: 2026/01/12 17:39:28 by mfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct  s_point
{
    int           x;
    int           y;
}               t_point;

void    fill(char **tab, t_point size, t_point begin, char to_fill)
{
    if (!tab || !*tab || begin.x <0 || begin.y <0 || begin.x >= size.x || begin.y >= size.y || tab[begin.y][begin.x] != to_fill)
        return ;
    tab[begin.y][begin.x] = 'F';
    fill(tab, size, (t_point){begin.x - 1, begin.y}, to_fill);
    fill(tab, size, (t_point){begin.x + 1, begin.y}, to_fill);
    fill(tab, size, (t_point){begin.x, begin.y - 1}, to_fill);
    fill(tab, size, (t_point){begin.x, begin.y + 1}, to_fill);
}
void  flood_fill(char **tab, t_point size, t_point begin)
{
    fill(tab, size, begin, tab[begin.y][begin.x]);
}