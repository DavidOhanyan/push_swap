/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:42:36 by dohanyan          #+#    #+#             */
/*   Updated: 2023/06/04 16:25:37 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "get_next_line_bonus.h"

# ifdef PRINT_OUT
#  define IS_PRINT 1
# else
#  define IS_PRINT 0
# endif

typedef struct s_stack
{
	struct s_stack	*next;
	int				index;
	int				data;
	struct s_stack	*prev;
}	t_stack;

size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_free(char	**matrix, int j);
size_t	qanak(char const	*s, char c);
char	**ft_allocate_matrix(char const	*s, char c);
char	**ft_fill_matrix(char const	*s, char c, char	**res);
char	**ft_split(char const	*s, char c);
long	ft_atoi(const char *str);
char	*ft_strjoin(char *s1, char *s2);
void	check_mat(char **matrix);
int		ft_check_str_2(char *str);
void	check_str_call(char *str);
t_stack	*addtoempty(t_stack *head, int data);
t_stack	*push_back(t_stack *head, int data);
void	ft_free_node(t_stack *head, int i);
int		*check_twins(t_stack *head, int i);
int		*ft_sort(int *mas, int size);
t_stack	*ft_fill_index(t_stack *head, int *mas, int size);
int		ft_list_siz(t_stack *head);
void	ft_swap_a(t_stack *head);
void	ft_swap_b(t_stack *head);
void	ft_ss(t_stack *a, t_stack *b);
void	ft_push_b(t_stack **head_a, t_stack **head_b);
void	ft_push_a(t_stack **head_b, t_stack **head_a);
void	rotate_a(t_stack **head_a);
void	rotate_b(t_stack **head_b);
void	rotate_rotate(t_stack **head_a, t_stack **head_b);
void	reverse_rotate_a(t_stack **head_a);
void	reverse_rotate_b(t_stack **head_b);
void	reverse_rotate_rotate(t_stack **head_a, t_stack **head_b);
void	check_if_sort(int *mas, int siz);
int		ft_count(int count);
int		ft_where_bf(t_stack *stack_b, int index);
int		ft_where_12(t_stack *stack_a, int index);
void	ft_for_3(t_stack **a);
void	ft_check_tw_func(t_stack *head, int *mas, int size);
void	ft_fill_list(t_stack **head, char **matrix);
void	ft_sort_12(t_stack **a, t_stack **b, int siz);
void	ft_for_fly(t_stack **head_a, t_stack **head_b);
void	ft_null_a(t_stack **a, t_stack **b);
void	ft_null_b(t_stack **a, t_stack **b, int index);
void	check_args(int argc, char **argv);
void	ft_check_fill_stack(t_stack **a, char *res);
void	ft_do_sort(t_stack **a, t_stack **b);
#endif