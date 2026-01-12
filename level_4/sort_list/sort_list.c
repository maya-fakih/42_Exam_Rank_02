/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfakih <mfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:23:05 by mfakih            #+#    #+#             */
/*   Updated: 2026/01/12 16:34:40 by mfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ascending(int i, int j)
{
	return (i <= j);
}

typedef struct s_list t_list;

struct s_list {
    int data;
    t_list *next;
};

t_list	*sort_list(t_list   *lst, int (*cmp)(int, int))
{
    t_list *i;
    t_list *j;
    int temp;
    
    i = lst;
    j = i -> next;
    temp = 0;
    while (i)
    {
        j = i -> next;
        while (j)
        {
            if (cmp(i -> data,  j-> data) == 0)
            {
                temp = i-> data;
                i->data = j->data;
                j->data = temp;
            }
            j = j ->next;
        }
        i = i->next;
    }
    return (lst);
}