/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 20:56:41 by julian            #+#    #+#             */
/*   Updated: 2021/08/30 11:39:30 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_input(int stack_size, char **input)
{
	int	*stack;
	int	i;

	check_digits(stack_size, input);
	check_min_max(stack_size, input);
	stack = malloc(sizeof(int) * stack_size);
	if (stack == NULL)
		print_error(input);
	i = -1;
	while (++i < stack_size)
		stack[i] = ft_atoi(input[i]);
	check_duplicates(stack_size, stack, input);
	free(stack);
}
