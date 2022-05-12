/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 02:38:13 by dcerrito          #+#    #+#             */
/*   Updated: 2022/05/13 00:58:34 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

static int	handle_sort(t_stack stacks[2])
{
	if (stacks[0].size < 6)
		return (short_sort(stacks));
	return (short_sort(stacks));
}

int	main(int argc, char **argv)
{
	t_stack	stacks[2];
	char	inputs[MAX_INPUT];
	int		error_status;
	int		i;

	i = 1;
	stacks[0].size = argc - 1;
	stacks[1].size = stacks[0].size;
	stacks[0].content = malloc(sizeof(int) * stacks[1].size);
	stacks[1].content = malloc(sizeof(int) * stacks[1].size);
	if (argc == 1)
		read(STDIN_FILENO, inputs, MAX_INPUT);
	while (argv[i])
	{
		if (!ft_isnumber(argv[i]))
			return (free_stacks(stacks, "ERROR"), EXIT_FAILURE);
		stacks[0].content[i - 1] = ft_atoi(argv[i], &error_status);
		stacks[1].content[i - 1] = 0;
		if (++i, error_status < 0)
			return (free_stacks(stacks, "ERROR"), EXIT_FAILURE);
	}
	if (is_sorted(stacks[0]))
		return (EXIT_SUCCESS);
	return (handle_sort(stacks));
}
