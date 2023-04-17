/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <abuonomo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:08:00 by abuonomo          #+#    #+#             */
/*   Updated: 2023/04/17 16:53:16 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../ft_printf/ft_printf.h"
#include "../libft/libft.h"
#include <stdlib.h>

void	free_error(t_stack *stack, int choix)
{
	free(stack->a);
	free(stack->b);
	if (choix)
		ft_printf("Error\n");
	exit(1);
}

void	exec_instruction(t_stack *stack, char *instruction)
{
	if (!ft_strcmp(instruction, "sa\n"))
		sa(stack, 1);
	else if (!ft_strcmp(instruction, "sb\n"))
		sb(stack, 1);
	else if (!ft_strcmp(instruction, "ss\n"))
		ss(stack, 1);
	else if (!ft_strcmp(instruction, "ra\n"))
		ra(stack, 1);
	else if (!ft_strcmp(instruction, "rb\n"))
		rb(stack, 1);
	else if (!ft_strcmp(instruction, "rr\n"))
		rr(stack, 1);
	else if (!ft_strcmp(instruction, "rra\n"))
		rra(stack, 1);
	else if (!ft_strcmp(instruction, "rrb\n"))
		rrb(stack, 1);
	else if (!ft_strcmp(instruction, "rrr\n"))
		rrr(stack, 1);
	else if (!ft_strcmp(instruction, "pa\n"))
		pa(stack, 1);
	else if (!ft_strcmp(instruction, "pb\n"))
		pb(stack, 1);
	else
		free_error(stack, 1);
}

void	read_from_stdin(t_stack *stack)
{
	char		*instruction;

	instruction = get_next_line(0);
	while (instruction)
	{
		exec_instruction(stack, instruction);
		free(instruction);
		instruction = get_next_line(0);
	}
	if (check_sorted(stack->a, stack->size_a, 0) && stack->size_b == 0)
		ft_printf("OK\n");
	else
		ft_printf("K0\n");
	free_error(stack, 0);
}

int	*c_errors(char **av)
{
	int	*a;
	int	size;
	int	i;

	i = -1;
	size = push_swap_strlen(av);
	a = malloc(size * sizeof(int));
	while (++i < size)
		a[i] = push_swap_atoi(av[i], a);
	check_doubles(a, size);
	return (a);
}

int	main(int ac, char **av)
{
	t_stack	stack;

	if (ac > 1)
	{
		av++;
		if (ac == 2)
			av = ft_split(*av, ' ');
		stack.a = c_errors(av);
		stack.size_a = push_swap_strlen(av);
		stack.b = malloc(stack.size_a * sizeof(int));
		if (!stack.b)
		{
			free(stack.a);
			return (0);
		}
		stack.size_b = 0;
		read_from_stdin(&stack);
	}
	return (0);
}
