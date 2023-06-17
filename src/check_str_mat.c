/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_str_mat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 04:18:56 by dohanyan          #+#    #+#             */
/*   Updated: 2023/06/17 15:48:15 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_str_2(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
			i++;
	if (str[i] == '0')
	{
		while (str[i] == '0' && str[i] != '\0')
			i++;
	}
	return (i);
}

void	check_str_call(char *str)
{
	int	i;

	i = ft_check_str_2(str);
	if (ft_strlen(str + i) > 10)
	{
		write(1, "Error\n", 6);
		exit(0);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
		{
			write(1, "Error\n", 6);
			exit(0);
		}
	}
}

void	check_mat(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		check_str_call(matrix[i]);
		i++;
	}
}
