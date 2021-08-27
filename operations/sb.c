/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:49:46 by julian            #+#    #+#             */
/*   Updated: 2021/08/27 11:34:43 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_list **stack_b)
{
	int	temp;
	int	len;

	len = ft_lstsize(*stack_b);
	if (len > 1)
	{
		temp = (*stack_b)->content;
		(*stack_b)->content = (*stack_b)->next->content;
		(*stack_b)->next->content = temp;
	}
	write(1, "sb\n", 3);
}
