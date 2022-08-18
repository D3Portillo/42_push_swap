/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bogosort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:34:36 by dcerrito          #+#    #+#             */
/*   Updated: 2022/08/18 23:44:40 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./utils.h"

// TODO: Handle 100+ items
int	bogosort(t_stack stacks[2])
{
	int	*content;

	content = stacks[0].content;
	if (is_sorted(stacks[0]))
		return (EXIT_SUCCESS);
	return (bogosort(stacks));
}
