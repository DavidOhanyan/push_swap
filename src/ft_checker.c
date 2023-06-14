/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:23:10 by dohanyan          #+#    #+#             */
/*   Updated: 2023/04/15 17:52:03 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	do_list_comands(char *line, t_stack **a, t_stack **b, int *val)
{
	if (ft_strcmp(line, "sa\n") == 0)
		ft_swap_a(*a);
	else if (ft_strcmp(line, "sb\n") == 0)
		ft_swap_b(*b);
	else if (ft_strcmp(line, "ss\n") == 0)
		ft_ss(*a, *b);
	else if (ft_strcmp(line, "pa\n") == 0)
		ft_push_a(a, b);
	else if (ft_strcmp(line, "pb\n") == 0)
		ft_push_b(a, b);
	else if (ft_strcmp(line, "ra\n") == 0)
		rotate_a(a);
	else if (ft_strcmp(line, "rb\n") == 0)
		rotate_b(b);
	else if (ft_strcmp(line, "rr\n") == 0)
		rotate_rotate(a, b);
	else if (ft_strcmp(line, "rra\n") == 0)
		reverse_rotate_a(a);
	else if (ft_strcmp(line, "rrb\n") == 0)
		reverse_rotate_a(b);
	else if (ft_strcmp(line, "rrr\n") == 0)
		reverse_rotate_rotate(a, b);
	else
		*val = 1;
}

void	last_res(t_stack **a, t_stack **b, int is_ko)
{
	if (!(*a))
	{
		write(1, "KO\n", 3);
		exit(0);
	}
	while ((*a)->next != NULL)
	{
		if ((*a)->data < (*a)->next->data)
			*a = (*a)->next;
		else
			break ;
	}
	if (is_ko == 1)
	{
		write(1, "ERROR\n", 6);
		exit(0);
	}
	if ((*a)->next == NULL && !(*b))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

void	if_sort(t_stack **a, t_stack **b)
{
	char	*line;
	int		is_ko;

	is_ko = 0;
	while (1)
	{
		line = get_next_line(0);
		if (line == NULL)
			break ;
		do_list_comands(line, a, b, &is_ko);
		free(line);
	}
	last_res(a, b, is_ko);
}

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
	if_sort(&a, &b);
	return (0);
}
