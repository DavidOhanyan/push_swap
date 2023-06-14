/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_fill_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 04:05:34 by dohanyan          #+#    #+#             */
/*   Updated: 2023/03/14 05:54:18 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_fill_list(t_stack **head, char **matrix)
{	
	int		j;
	long	at_oi;

	j = 0;
	at_oi = 0;
	while (matrix[j])
	{
		at_oi = ft_atoi(matrix[j]);
		if (at_oi > 2147483647 || at_oi < -2147483648)
		{
			if (j > 0)
				ft_free_node(*head, j);
			write(1, "Error\n", 6);
			exit(0);
		}
			*head = push_back(*head, at_oi);
			j++;
	}
}
