/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:36:25 by julian            #+#    #+#             */
/*   Updated: 2021/08/27 18:27:35 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	sort_four_helper(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_b)->content < (*stack_a)->content)
		pa(stack_a, stack_b);
	else if ((*stack_b)->content > (*stack_a)->content
		&& (*stack_b)->content < (*stack_a)->next->content)
	{
		pa(stack_a, stack_b);
		sa(stack_a);
	}
	else if ((*stack_b)->content > (*stack_a)->next->content
		&& (*stack_b)->content < (*stack_a)->next->next->content)
	{
		rra(stack_a);
		pa(stack_a, stack_b);
		ra(stack_a);
		ra(stack_a);
	}
	else if ((*stack_b)->content > (*stack_a)->next->next->content)
	{
		pa(stack_a, stack_b);
		ra(stack_a);
	}
}

void	sort_four(t_list **stack_a, t_list **stack_b)
{
	pb(stack_a, stack_b);
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
	sort_four_helper(stack_a, stack_b);
}
