/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_sort_12.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 03:54:57 by dohanyan          #+#    #+#             */
/*   Updated: 2023/06/14 18:40:04 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_where_12(t_stack *stack_a, int index)
{
	t_stack	*tp;
	int		i;

	i = 0;
	tp = stack_a;
	while (i < ft_list_siz(tp) / 2)
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

void	ft_sort_12(t_stack	**a, t_stack **b, int index)
{
	if (ft_list_siz(*a) <= 12)
	{
		while (ft_list_siz(*a) != 3)
		{
			if (ft_where_12(*a, index) == 1)
			{
				while ((*a)->index != index)
					rotate_a(a);
			}
			else
			{
				while ((*a)->index != index)
					reverse_rotate_a(a);
			}
			ft_push_b(a, b);
			index++;
		}
		ft_for_3(a);
		while (*b != NULL)
			ft_push_a(a, b);
	}
}
