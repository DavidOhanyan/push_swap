/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_reverce_rotate_node.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 04:01:18 by dohanyan          #+#    #+#             */
/*   Updated: 2023/03/16 00:33:47 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_stack **head_a)
{
	t_stack	*tp;

	if (ft_list_siz(*head_a) > 1)
	{
		tp = *head_a;
		while (tp->next != NULL)
			tp = tp->next;
		tp->prev->next = NULL;
		tp->prev = NULL;
		tp->next = *head_a;
		(*head_a)->prev = tp;
		*head_a = tp;
		if (IS_PRINT)
			write(1, "rra\n", 4);
	}
}

void	reverse_rotate_b(t_stack **head_b)
{
	t_stack	*tp;

	if (ft_list_siz(*head_b) > 1)
	{
		tp = *head_b;
		while (tp->next != NULL)
			tp = tp->next;
		tp->prev->next = NULL;
		tp->prev = NULL;
		tp->next = *head_b;
		(*head_b)->prev = tp;
		*head_b = tp;
		if (IS_PRINT)
			write(1, "rrb\n", 4);
	}
}

void	reverse_rotate_rotate(t_stack **head_a, t_stack **head_b)
{
	reverse_rotate_a(head_a);
	reverse_rotate_b(head_b);
	if (IS_PRINT)
		write(1, "rrr\n", 4);
}
