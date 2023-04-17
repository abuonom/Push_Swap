/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <abuonomo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:53:43 by abuonomo          #+#    #+#             */
/*   Updated: 2023/04/17 16:53:43 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
}	t_stack;

void	push_swap(char **av);
int		push_swap_strlen(char **av);
void	error_detected(int *stack);
int		push_swap_atoi(char *str, int *stack);
void	check_doubles(int *stack, int size);
void	sa(t_stack *stack, int bonus);
void	sb(t_stack *stack, int bonus);
void	ss(t_stack *stack, int bonus);
void	ra(t_stack *stack, int bonus);
void	rb(t_stack *stack, int bonus);
void	rr(t_stack *stack, int bonus);
void	rra(t_stack *stack, int bonus);
void	rrb(t_stack *stack, int bonus);
void	rrr(t_stack *stack, int bonus);
void	pb(t_stack *stack, int bonus);
void	pa(t_stack *stack, int bonus);
int		sort(t_stack *stack, int size);
int		check_sorted(int *stack, int size, int order);
void	three_numbers_stack_a(t_stack *three);
void	temporary_sort(int *stack_temp, int size);
int		quicksort_a(t_stack *stack, int len, int count_r);
int		quicksort_b(t_stack *stack, int len, int count_r);
void	quicksort_three_stack_a_and_b(t_stack *stack, int len);
int		sort_three_b(t_stack *stack, int len);
int		ft_push(t_stack *stack, int len, int pb);
int		pivot_numbers(int *pivot, int *stack, int size);
void	read_from_stdin(t_stack *stack);
int		*c_errors(char **av);
void	exec_instruction(t_stack *stack, char *inst);
void	free_error(t_stack *stack, int c);
#endif
