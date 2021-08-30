/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 10:55:05 by julian            #+#    #+#             */
/*   Updated: 2021/08/30 11:39:55 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_radix
{
	int	max_iterations;
	int	i;
	int	j;
	int	k;
	int	l;
}			t_radix;

char	**get_input(char *argv[], int argc);
int		get_stack_size(char **input);
void	check_digits(int argc, char *argv[]);
void	check_duplicates(int stack_size, int *stack, char **input);
void	check_input(int argc, char *argv[]);
void	check_max(char *s[], int i);
void	check_min_max(int stack_size, char *argv[]);
void	check_min(char *s[], int i);
void	print_error(char **s);

void	initialize_stack(int argc, char *argv[], t_list **stack_a);
int		a_already_sorted(t_list	**stack_a, char **input);
void	sort_small_stack(t_list **stack_a, t_list **stack_b);
void	sort_two(t_list **stack_a);
void	sort_three(t_list **stack_a);
void	sort_four(t_list **stack_a, t_list **stack_b);
void	sort_five(t_list **stack_a, t_list **stack_b);
void	radix_sort(t_list **stack_a, t_list **stack_b, int stack_size);
void	free_list(t_list **stack_a);
void	free_arr(char **src);

void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_a);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_a);
void	rrr(t_list **stack_a, t_list **stack_b);

#endif
