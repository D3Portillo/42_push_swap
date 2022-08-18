/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 03:08:54 by dcerrito          #+#    #+#             */
/*   Updated: 2022/08/18 19:53:18 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "../includes/core.h"
# include "../libft/libft.h"

# define SA "sa"
# define SB "sb"
# define SS "ss"
# define PA "pa"
# define PB "pb"
# define RA "ra"
# define RB "rb"
# define RR "rr"
# define RRA "rra"
# define RRB "rrb"
# define RRR "rrr"

typedef struct s_stack
{
	int	*content;
	int	size;
}	t_stack;

void	executes(char *action, t_stack stacks[2]);
void	free_stacks(t_stack stacks[2], char *error);
int		is_sorted(t_stack stack);
void	print_stack(t_stack stack);
void	prints(char *content, int size);
int		short_sort(t_stack stacks[2]);
int		bogosort(t_stack stacks[2]);

#endif