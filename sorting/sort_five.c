/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:36:50 by julian            #+#    #+#             */
/*   Updated: 2021/08/27 18:27:30 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	sort_five_helper_four(t_list **stack_a, t_list **stack_b, int i)
{
	sa(stack_a);
	if (i == 1)
	{
		if ((*stack_b)->content < (*stack_b)->next->content)
			rra(stack_a);
		else
			rrr(stack_a, stack_b);
	}
	if (i == 2)
	{
		if ((*stack_b)->content < (*stack_b)->next->content)
			ra(stack_a);
		else
			rr(stack_a, stack_b);
	}
}

static void	sort_five_helper_three(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a);
	ra(stack_a);
	pa(stack_a, stack_b);
	rra(stack_a);
	rra(stack_a);
}

static void	sort_five_helper_two(t_list **stack_a, t_list **stack_b)
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
		sort_five_helper_three(stack_a, stack_b);
	else if ((*stack_b)->content > (*stack_a)->next->next->content
		&& (*stack_b)->content < (*stack_a)->next->next->next->content)
	{
		rra(stack_a);
		pa(stack_a, stack_b);
		ra(stack_a);
		ra(stack_a);
	}
	else if ((*stack_b)->content > (*stack_a)->next->next->next->content)
	{
		pa(stack_a, stack_b);
		ra(stack_a);
	}
}

static void	sort_five_helper(t_list **stack_a, t_list **stack_b)
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
	sort_five_helper_two(stack_a, stack_b);
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	if ((*stack_a)->content > (*stack_a)->next->content
		&& (*stack_a)->content < (*stack_a)->next->next->content)
		sa(stack_a);
	else if ((*stack_a)->content > (*stack_a)->next->content
		&& (*stack_a)->next->content > (*stack_a)->next->next->content)
		sort_five_helper_four(stack_a, stack_b, 1);
	else if ((*stack_a)->next->next->content > (*stack_a)->next->content
		&& (*stack_a)->next->next->content < (*stack_a)->content)
		ra(stack_a);
	else if ((*stack_a)->next->next->content < (*stack_a)->next->content
		&& (*stack_a)->next->next->content > (*stack_a)->content)
		sort_five_helper_four(stack_a, stack_b, 2);
	else if ((*stack_a)->content < (*stack_a)->next->content
		&& (*stack_a)->content > (*stack_a)->next->next->content)
		rra(stack_a);
	sort_five_helper(stack_a, stack_b);
}
