/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:43:06 by dohanyan          #+#    #+#             */
/*   Updated: 2023/03/27 21:01:15 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "push_swap.h"

int		ft_strcmp(char *s1, char *s2);
void	if_sort(t_stack **a, t_stack **b);
void	do_list_comands(char *line, t_stack **a, t_stack **b, int *val);
void	last_res(t_stack **a, t_stack **b, int is_ko);

#endif