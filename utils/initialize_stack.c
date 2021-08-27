/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 16:16:34 by julian            #+#    #+#             */
/*   Updated: 2021/08/27 18:21:54 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	sort_copy(int *copy, int len_array)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	while (i < len_array)
	{
		j = i + 1;
		while (j < len_array)
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

static void	index_stack_a(int *stack, int *copy, int len_array, char *argv[])
{
	int	i;
	int	j;

	i = -1;
	while (++i < len_array)
		stack[i] = ft_atoi(argv[i]);
	i = -1;
	while (++i < len_array)
		copy[i] = stack[i];
	sort_copy(copy, len_array);
	i = -1;
	while (++i < len_array)
	{
		j = -1;
		while (++j < len_array)
		{
			if (stack[i] == copy[j])
			{
				stack[i] = j;
				break ;
			}
		}
	}
}

void	initialize_stack(int argc, char *argv[], t_list **stack_a)
{
	int		*stack_a_int;
	int		*stack_a_copy;
	t_list	*new;
	int		i;

	stack_a_int = malloc(sizeof(int) * (argc - 1));
	if (stack_a_int == NULL)
		return ;
	stack_a_copy = malloc(sizeof(int) * (argc - 1));
	if (stack_a_int == NULL)
		return ;
	index_stack_a(stack_a_int, stack_a_copy, argc - 1, argv);
	i = -1;
	while (++i < argc - 1)
	{
		new = ft_lstnew(stack_a_int[i]);
		if (new == NULL)
			exit (EXIT_FAILURE);
		ft_lstadd_back(stack_a, new);
	}
	free(stack_a_int);
	free(stack_a_copy);
}
