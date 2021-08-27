/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 13:52:02 by julian            #+#    #+#             */
/*   Updated: 2021/08/27 18:28:05 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_small_stack(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) == 1)
		return ;
	if (ft_lstsize(*stack_a) == 2)
		sort_two(stack_a);
	if (ft_lstsize(*stack_a) == 3)
		sort_three(stack_a);
	if (ft_lstsize(*stack_a) == 4)
		sort_four(stack_a, stack_b);
	if (ft_lstsize(*stack_a) == 5)
		sort_five(stack_a, stack_b);
}
