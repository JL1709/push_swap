/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 10:54:08 by julian            #+#    #+#             */
/*   Updated: 2021/09/03 09:29:57 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	char	**input;
	int		stack_size;
	t_list	*stack_a;
	t_list	*stack_b;
	int		sorted;

	if (argc < 2 || (argc == 2 && argv[1][0] == '\0'))
		return (0);
	input = get_input(argv, argc);
	stack_size = get_stack_size(input);
	check_input(stack_size, input);
	stack_a = NULL;
	initialize_stack(stack_size, input, &stack_a);
	if ((sorted = a_already_sorted(&stack_a, input)) == 0)
		return (0);
	stack_b = NULL;
	if (ft_lstsize(stack_a) <= 5)
		sort_small_stack(&stack_a, &stack_b);
	else
		radix_sort(&stack_a, &stack_b, stack_size);
	free_arr(input);
	free_list(&stack_a);
	return (0);
}
