/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_min_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 20:56:52 by julian            #+#    #+#             */
/*   Updated: 2021/08/30 11:36:30 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_min_max(int stack_size, char *input[])
{
	int	i;
	int	len;

	i = -1;
	while (++i < stack_size)
	{
		len = ft_strlen(input[i]);
		if (len == 10)
		{
			if (input[i][0] == '-')
				continue ;
			else
				check_max(input, i);
		}
		if (len == 11)
		{
			if (input[i][0] == '-')
				check_min(input, i);
			else
				print_error(input);
		}
		if (len > 11)
			print_error(input);
	}
}
