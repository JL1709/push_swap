/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 16:16:34 by julian            #+#    #+#             */
/*   Updated: 2021/08/30 11:42:36 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	end_programm(char **input, t_list **stack_a, int *s, int *copy)
{
	if (stack_a)
		free_list(stack_a);
	free_arr(input);
	free(s);
	free(copy);
	exit (EXIT_FAILURE);
}

static void	sort_copy(int *copy, int stack_size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	while (i < stack_size)
	{
		j = i + 1;
		while (j < stack_size)
		{
			if (copy[i] > copy[j])
			{
				temp = copy[i];
				copy[i] = copy[j];
				copy[j] = temp;
			}
			j++;
		}
		i++;
	}
}

static void	index_stack_a(int *stack, int *copy, int stack_size, char **input)
{
	int	i;
	int	j;

	i = -1;
	while (++i < stack_size)
		stack[i] = ft_atoi(input[i]);
	i = -1;
	while (++i < stack_size)
		copy[i] = stack[i];
	sort_copy(copy, stack_size);
	i = -1;
	while (++i < stack_size)
	{
		j = -1;
		while (++j < stack_size)
		{
			if (stack[i] == copy[j])
			{
				stack[i] = j;
				break ;
			}
		}
	}
}

void	initialize_stack(int stack_size, char **input, t_list **stack_a)
{
	int		*stack_a_int;
	int		*stack_a_copy;
	t_list	*new;
	int		i;

	stack_a_int = malloc(sizeof(int) * stack_size);
	if (stack_a_int == NULL)
		print_error(input);
	stack_a_copy = malloc(sizeof(int) * stack_size);
	if (stack_a_int == NULL)
		print_error(input);
	index_stack_a(stack_a_int, stack_a_copy, stack_size, input);
	i = -1;
	while (++i < stack_size)
	{
		new = ft_lstnew(stack_a_int[i]);
		if (new == NULL)
			end_programm(input, stack_a, stack_a_int, stack_a_copy);
		ft_lstadd_back(stack_a, new);
	}
	free(stack_a_int);
	free(stack_a_copy);
}
