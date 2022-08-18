/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 02:38:13 by dcerrito          #+#    #+#             */
/*   Updated: 2022/08/18 23:40:44 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

static int	handle_sort(t_stack stacks[2])
{
	if (stacks[0].size < 6)
		return (short_sort(stacks));
	return (bogosort(stacks));
}

static int	in_stack(int n, int **__stack, const int __end)
{
	int	*stack;
	int	end;
	int	start;

	start = 0;
	end = __end;
	stack = *__stack;
	while (start <= --end)
	{
		if (n == stack[start] && start != end)
			return (1);
		if (n == stack[end] && end > 0 && end < __end)
			return (1);
		++start;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack	stacks[2];
	int		error_status;
	int		i;
	int		n;

	i = 1;
	stacks[0].size = argc - 1;
	stacks[1].size = stacks[0].size;
	stacks[0].content = malloc(sizeof(int) * stacks[1].size);
	stacks[1].content = malloc(sizeof(int) * stacks[1].size);
	while (argv[i])
	{
		n = ft_atoi(argv[i], &error_status);
		if (!ft_isnumber(argv[i]) || in_stack(n, &stacks[0].content, i))
			return (free_stacks(stacks, "ERROR"), EXIT_FAILURE);
		stacks[0].content[i - 1] = n;
		stacks[1].content[i - 1] = 0;
		if (++i, error_status < 0)
			return (free_stacks(stacks, "ERROR"), EXIT_FAILURE);
	}
	if (is_sorted(stacks[0]))
		return (EXIT_SUCCESS);
	return (handle_sort(stacks));
}
