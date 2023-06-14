/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_check_tw.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 04:09:13 by dohanyan          #+#    #+#             */
/*   Updated: 2023/03/31 19:36:11 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_sort(int *mas, int size)
{
	int	i;
	int	j;
	int	temp;

	temp = 0;
	j = 0;
	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (mas[i] > mas[j])
			{
				temp = mas[i];
				mas[i] = mas[j];
				mas[j] = temp;
			}
			j++;
		}
		i++;
	}
	return (mas);
}

void	check_if_sort(int *mas, int siz)
{
	int	i;

	i = 0;
	while (i < siz - 1 && mas[i] < mas[i + 1])
		i++;
	if (i == siz - 1)
		exit(0);
}

void	ft_check_tw_func(t_stack *head, int *mas, int size)
{
	int	j;
	int	c;

	c = 0;
	j = 0;
	while (j < size - 1)
	{
		c = j + 1;
		while (c < size)
		{
			if (mas[j] == mas[c])
			{
				write(1, "Error\n", 6);
				ft_free_node(head, size);
				free(mas);
				exit(0);
			}
			c++;
		}
		j++;
		c = 0;
	}
}

int	*check_twins(t_stack *head, int i)
{
	int		j;
	int		*mas;
	t_stack	*ptr;

	j = 0;
	ptr = head;
	mas = (int *)malloc(sizeof(int) * i);
	while (j < i)
	{
		mas[j] = ptr->data;
		ptr = ptr->next;
		j++;
	}
	ft_check_tw_func(head, mas, i);
	if (IS_PRINT)
		check_if_sort(mas, i);
	return (ft_sort(mas, i));
}
