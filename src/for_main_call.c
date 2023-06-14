/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_main_call.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:22:10 by dohanyan          #+#    #+#             */
/*   Updated: 2023/06/13 17:12:50 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_do_sort(t_stack **a, t_stack **b)
{
	int	index;

	index = 0;
	if (ft_list_siz(*a) <= 3)
		ft_for_3(a);
	else if (ft_list_siz(*a) <= 12)
		ft_sort_12(a, b, index);
	else if (ft_list_siz(*a) > 12)
		ft_for_fly(a, b);
}

void	ft_check_fill_stack(t_stack **a, char *res)
{
	char	**matrix;
	int		*mas;

	matrix = ft_split(res, ' ');
	check_mat(matrix);
	ft_fill_list(a, matrix);
	ft_free(matrix, ft_list_siz(*a));
	mas = check_twins(*a, ft_list_siz(*a));
	*a = ft_fill_index(*a, mas, ft_list_siz(*a));
	free(mas);
}

void	check_args(int argc, char **argv)
{
	int	j;
	int	mocak;

	mocak = 0;
	j = 1;
	while (j < argc)
	{
		mocak = 0;
		while (argv[j][mocak] == ' ')
			mocak++;
		if (ft_strlen(argv[j] + mocak) == 0)
		{
			write(1, "Error\n", 6);
			exit(0);
		}	
		j++;
	}
}
