/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_sort_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 03:53:44 by dohanyan          #+#    #+#             */
/*   Updated: 2023/06/14 17:20:07 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_for_3(t_stack **a)
{
	if (ft_list_siz(*a) != 2)
	{
		if ((*a)->index > (*a)->next->index
			&& (*a)->index > (*a)->next->next->index)
			rotate_a(a);
		else if ((*a)->next->index > (*a)->index
			&& (*a)->next->index > (*a)->next->next->index)
			reverse_rotate_a(a);
	}
	if ((*a)->index > (*a)->next->index)
		ft_swap_a(*a);
}
