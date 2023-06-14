/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_sort_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 03:55:41 by dohanyan          #+#    #+#             */
/*   Updated: 2023/03/23 23:25:04 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_where_bf(t_stack *stack_b, int index)
{
	t_stack	*tp;
	int		i;

	i = 0;
	tp = stack_b;
	while (i < ft_list_siz(stack_b) / 2)
	{
		if (index == tp->index)
			return (1);
		else
		{
			tp = tp->next;
			i++;
		}	
	}
	return (0);
}

void	ft_null_a(t_stack **a, t_stack **b)
{
	int	count;
	int	size;

	count = 0;
	while (*a != NULL)
	{
		size = ft_count(ft_list_siz(*a));
		if ((*a)->index <= count)
		{
			ft_push_b(a, b);
			rotate_b(b);
			count++;
		}
		else if ((*a)->index <= count + size)
		{
			ft_push_b(a, b);
			count++;
		}
		else
			rotate_a(a);
	}
}

void	ft_null_b(t_stack **a, t_stack **b, int index)
{
	while (*b != NULL)
	{
		if (ft_where_bf(*b, index) == 1)
		{
			while ((*b)->index != index)
				rotate_b(b);
		}
		else
		{
			while ((*b)->index != index)
				reverse_rotate_b(b);
		}
		ft_push_a(a, b);
		index--;
	}
}

void	ft_for_fly(t_stack **a, t_stack **b)
{
	int	index;

	index = ft_list_siz(*a) - 1;
	ft_null_a(a, b);
	ft_null_b(a, b, index);
}
