/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 17:43:30 by jludt             #+#    #+#             */
/*   Updated: 2021/09/06 11:45:19 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	**get_input(char *argv[], int argc)
{
	int		i;
	char	*join;
	char	**input;

	join = ft_calloc(1, 1);
	if (join == NULL)
		return (NULL);
	i = -1;
	while (++i < argc - 1)
		join = ft_strjoin(join, argv[i + 1]);
	input = ft_split(join, ' ');
	free(join);
	return (input);
}
