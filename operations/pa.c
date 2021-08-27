/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:08:41 by julian            #+#    #+#             */
/*   Updated: 2021/08/27 11:33:19 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*new;
	t_list	*temp;

	if (stack_b != NULL)
	{
		new = ft_lstnew((*stack_b)->content);
		ft_lstadd_front(stack_a, new);
		temp = *stack_b;
		*stack_b = (*stack_b)->next;
		free(temp);
	}
	write(1, "pa\n", 3);
}
