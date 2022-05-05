/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 02:38:13 by dcerrito          #+#    #+#             */
/*   Updated: 2022/05/04 17:08:21 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

typedef struct s_stack
{
	int	*content;
	int	size;
}	t_stack;

void	executes(char *action)
{
	if (action == SA || action == SS)
		write(1, "2", 1);
	if (action == SB || action == SS)
		write(1, "2", 1);
	if (action == PA)
		write(1, "2", 1);
	if (action == PB)
		write(1, "2", 1);
	if (action == RA || action == RR)
		write(1, "2", 1);
	if (action == RB || action == RR)
		write(1, "2", 1);
	if (action == RRA || action == RRR)
		write(1, "2", 1);
	if (action == RRB || action == RRR)
		write(1, "2", 1);
}

void	free_stacks(t_stack stacks[2], char *error)
{
	free(stacks[0].content);
	free(stacks[1].content);
	if (error)
	{
		write(STDERR_FILENO, error, ft_strlen(error));
		write(STDERR_FILENO, "\n", 1);
		exit(EXIT_FAILURE);
	}
}

int	is_sorted(t_stack stack)
{
	int	i;

	i = 0;
	while (++i < stack.size)
		if (stack.content[i - 1] > stack.content[i])
			return (0);
	return (1);
}

int	handle_sort(t_stack stacks[2])
{
	
}

int	main(int argc, char **argv)
{
	t_stack	stacks[2];
	char	inputs[MAX_INPUT];
	int		solved;
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
