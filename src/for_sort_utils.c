/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_sort_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 02:30:23 by dohanyan          #+#    #+#             */
/*   Updated: 2023/03/14 05:07:03 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_count(int count)
{
	int	log;
	int	armat;
	int	i;

	i = 0;
	log = 1;
	armat = 1;
	while (armat * armat <= count)
		armat++;
	while (log * 2 <= count)
	{
		i++;
		log *= 2;
	}
	return (armat + i - 1);
}

int	ft_list_siz(t_stack *head)
{
	int		i;
	t_stack	*temp;

	i = 0;
	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
