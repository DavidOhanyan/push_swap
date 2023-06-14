/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_rotate_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 04:00:32 by dohanyan          #+#    #+#             */
/*   Updated: 2023/03/16 00:34:13 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack **head_a)
{
	t_stack	*temp;
	t_stack	*tp;

	if (ft_list_siz(*head_a) > 1)
	{
		temp = *head_a;
		(*head_a) = (*head_a)->next;
		(*head_a)->prev = NULL;
		temp->next = NULL;
		tp = *head_a;
		while (tp->next != NULL)
		{
			tp = tp->next;
		}
		tp->next = temp;
		temp->prev = tp;
		if (IS_PRINT)
			write(1, "ra\n", 3);
	}
}

void	rotate_b(t_stack **head_b)
{
	t_stack	*temp;
	t_stack	*tp;

	if (ft_list_siz(*head_b) > 1)
	{
		temp = *head_b;
		(*head_b) = (*head_b)->next;
		(*head_b)->prev = NULL;
		temp->next = NULL;
		tp = *head_b;
		while (tp->next != NULL)
			tp = tp->next;
		tp->next = temp;
		temp->prev = tp;
		if (IS_PRINT)
			write(1, "rb\n", 3);
	}
}

void	rotate_rotate(t_stack **head_a, t_stack **head_b)
{
	rotate_a(head_a);
	rotate_b(head_b);
	if (IS_PRINT)
		write (1, "rr\n", 3);
}
