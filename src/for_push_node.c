/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_push_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 03:59:44 by dohanyan          #+#    #+#             */
/*   Updated: 2023/03/23 23:08:51 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_a(t_stack **head_a, t_stack **head_b)
{
	t_stack	*temp;

	if (ft_list_siz(*head_b) > 0)
	{
		temp = *head_b;
		if ((*head_b)->next != NULL)
		{
			*head_b = (*head_b)->next;
			(*head_b)->prev = NULL;
		}
		else
		*head_b = (*head_b)->next;
		temp->next = NULL;
		if (*head_a == NULL)
			*head_a = temp;
		else
		{
			temp->next = *head_a;
			(*head_a)->prev = temp;
			*head_a = temp;
		}
		if (IS_PRINT)
			write(1, "pa\n", 3);
	}
}

void	ft_push_b(t_stack **head_a, t_stack **head_b)
{
	t_stack	*temp;

	if (ft_list_siz(*head_a) > 0)
	{
		temp = *head_a;
		if ((*head_a)->next != NULL)
		{
			*head_a = (*head_a)->next;
			(*head_a)->prev = NULL;
		}
		else
		*head_a = (*head_a)->next;
		temp->next = NULL;
		if (*head_b == NULL)
			*head_b = temp;
		else
		{		
			temp->next = *head_b;
			(*head_b)->prev = temp;
			*head_b = temp;
		}
		if (IS_PRINT)
			write(1, "pb\n", 3);
	}
}
