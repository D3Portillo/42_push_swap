/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:34:36 by dcerrito          #+#    #+#             */
/*   Updated: 2022/05/13 00:43:19 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./utils.h"

int	short_sort(t_stack stacks[2])
{
	int	*content;

	content = stacks[0].content;
	if (stacks[0].size < 4)
	{
		if (
			content[1] > content[0]
			&& content[1] > content[2]
			&& content[0] > content[2]
		)
			executes(RRA, stacks);
		else if (content[0] > content[1] && content[0] > content[2])
			executes(RA, stacks);
		else
			executes(SA, stacks);
	}
	if (is_sorted(stacks[0]))
		return (EXIT_SUCCESS);
	return (short_sort(stacks));
}
