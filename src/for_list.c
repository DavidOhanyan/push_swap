/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:53:50 by dohanyan          #+#    #+#             */
/*   Updated: 2023/03/14 05:46:10 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*addtoempty(t_stack *head, int data)
{
	t_stack	*temp;

	temp = malloc(sizeof(t_stack));
	temp->prev = NULL;
	temp->index = 0;
	temp->data = data;
	temp->next = NULL;
	head = temp;
	return (head);
}

t_stack	*push_back(t_stack *head, int data)
{
	t_stack	*temp;
	t_stack	*tp;

	if (head == NULL)
	{
		head = addtoempty(head, data);
		return (head);
	}
	temp = malloc(sizeof(t_stack));
	temp->prev = NULL;
	temp->index = 0;
	temp->data = data;
	temp->next = NULL;
	tp = head;
	while (tp->next != NULL)
		tp = tp->next;
	tp->next = temp;
	temp->prev = tp;
	return (head);
}

void	ft_free_node(t_stack *head, int i)
{
	int		j;
	t_stack	*rem;

	j = 0;
	while (j < i)
	{
		rem = head;
		head = head->next;
		free(rem);
		j++;
	}
	free(head);
	rem = NULL;
	head = NULL;
}
