/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_swap_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 03:58:27 by dohanyan          #+#    #+#             */
/*   Updated: 2023/03/16 00:33:07 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_a(t_stack *head)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (ft_list_siz(head) > 1)
	{
		j = head->data;
		i = head->next->data;
		head->data = i;
		head->next->data = j;
		j = head->index;
		i = head->next->index;
		head->index = i;
		head->next->index = j;
		if (IS_PRINT)
			write(1, "sa\n", 3);
	}
}

void	ft_swap_b(t_stack *head)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (ft_list_siz(head) > 1)
	{
		j = head->data;
		i = head->next->data;
		head->data = i;
		head->next->data = j;
		j = head->index;
		i = head->next->index;
		head->index = i;
		head->next->index = j;
		if (IS_PRINT)
			write(1, "sb\n", 3);
	}
}

void	ft_ss(t_stack *a, t_stack *b)
{
	ft_swap_a(a);
	ft_swap_b(b);
	if (IS_PRINT)
		write(1, "ss\n", 3);
}
