/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_already_sorted.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 12:38:58 by julian            #+#    #+#             */
/*   Updated: 2021/08/30 11:34:41 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	a_already_sorted(t_list	**stack_a, char **input)
{
	t_list	*tmp;
	int		stack_size;

	stack_size = ft_lstsize(*stack_a);
	tmp = *stack_a;
	while (--stack_size)
	{
		if (tmp->content > tmp->next->content)
			return (1);
		tmp = tmp->next;
	}
	free_arr(input);
	free_list(stack_a);
	return (0);
}
