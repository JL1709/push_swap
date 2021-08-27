/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:35:57 by julian            #+#    #+#             */
/*   Updated: 2021/08/27 18:27:41 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_list **stack_a)
{
	if ((*stack_a)->content > (*stack_a)->next->content
		&& (*stack_a)->content < (*stack_a)->next->next->content)
		sa(stack_a);
	else if ((*stack_a)->content > (*stack_a)->next->content
		&& (*stack_a)->next->content > (*stack_a)->next->next->content)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if ((*stack_a)->next->next->content > (*stack_a)->next->content
		&& (*stack_a)->next->next->content < (*stack_a)->content)
		ra(stack_a);
	else if ((*stack_a)->next->next->content < (*stack_a)->next->content
		&& (*stack_a)->next->next->content > (*stack_a)->content)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if ((*stack_a)->content < (*stack_a)->next->content
		&& (*stack_a)->content > (*stack_a)->next->next->content)
		rra(stack_a);
}
