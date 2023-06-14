/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:42:31 by dohanyan          #+#    #+#             */
/*   Updated: 2023/06/14 18:40:15 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		j;
	char	*res;
	int		mocak;
	t_stack	*a;
	t_stack	*b;

	mocak = 0;
	a = NULL;
	b = NULL;
	res = NULL;
	j = 1;
	if (argc < 2)
		exit(0);
	check_args(argc, argv);
	while (j < argc)
	{
		res = ft_strjoin(res, argv[j]);
		res = ft_strjoin(res, " ");
		j++;
	}
	ft_check_fill_stack(&a, res);
	ft_do_sort(&a, &b);
	return (0);
}
