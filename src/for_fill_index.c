/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_fill_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 04:06:23 by dohanyan          #+#    #+#             */
/*   Updated: 2023/04/08 18:08:26 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_fill_index(t_stack *head, int *mas, int size)
{
	int		i;
	t_stack	*temp;

	temp = head;
	i = 0;
	while (i < size)
	{
		if (temp && temp->data == mas[i])
		{
			temp->index = i;
			temp = temp->next;
			i = 0;
		}
		else
			i++;
	}
	return (head);
}
