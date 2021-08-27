/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 19:12:37 by julian            #+#    #+#             */
/*   Updated: 2021/08/27 11:33:28 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*new;
	t_list	*temp;

	if (stack_a != NULL)
	{
		new = ft_lstnew((*stack_a)->content);
		ft_lstadd_front(stack_b, new);
		temp = *stack_a;
		*stack_a = (*stack_a)->next;
		free(temp);
	}
	write(1, "pb\n", 3);
}
