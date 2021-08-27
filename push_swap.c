/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 10:54:08 by julian            #+#    #+#             */
/*   Updated: 2021/08/27 18:47:17 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	char	**input;
	int		stack_size;
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc < 2)
		print_error();
	input = get_input(argv, argc);
	stack_size = get_stack_size(input);
	check_input(stack_size, input);
	stack_a = NULL;
	initialize_stack(stack_size + 1, input, &stack_a);
	stack_b = NULL;
	a_already_sorted(&stack_a, input);
	if (ft_lstsize(stack_a) <= 5)
		sort_small_stack(&stack_a, &stack_b);
	else
		radix_sort(&stack_a, &stack_b, stack_size);
	free(input);
	free_list(&stack_a);
	return (0);
}
