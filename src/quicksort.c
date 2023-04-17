/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <abuonomo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:07:48 by abuonomo          #+#    #+#             */
/*   Updated: 2023/04/17 16:55:37 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../ft_printf/ft_printf.h"
#include <stdlib.h>

void	quicksort_three_stack_a_and_b(t_stack *stack, int len)
{
	if (len == 3 && stack->size_a == 3)
		three_numbers_stack_a(stack);
	else if (len == 2)
	{
		if (stack->a[0] > stack->a[1])
			sa(stack, 0);
	}
	else if (len == 3)
	{
		while (len != 3 || !(stack->a[0] < stack->a[1]
				&& stack->a[1] < stack->a[2]))
		{
			if (len == 3 && stack->a[0] > stack->a[1] && stack->a[2])
				sa(stack, 0);
			else if (len == 3 && !(stack->a[2] > stack->a[0]
					&& stack->a[2] > stack->a[1]))
				len = ft_push(stack, len, 0);
			else if (stack->a[0] > stack->a[1])
				sa(stack, 0);
			else if (len++)
				pa(stack, 0);
		}
	}
}

int	sort_three_b(t_stack *stack, int len)
{
	if (len == 1)
		pa(stack, 0);
	else if (len == 2)
	{
		if (stack->b[0] < stack->b[1])
			sb(stack, 0);
		while (len--)
			pa(stack, 0);
	}
	else if (len == 3)
	{
		while (len || !(stack->a[0] < stack->a[1] && stack->a[1] < stack->a[2]))
		{
			if (len == 1 && stack->a[0] > stack->a[1])
				sa(stack, 0);
			else if (len == 1 || (len >= 2 && stack->b[0] > stack->b[1])
				|| (len == 3 && stack->b[0] > stack->b[2]))
				len = ft_push(stack, len, 1);
			else
				sb(stack, 0);
		}
	}
	return (0);
}

int	pivot_of_numbers(int *pivot, int *stack, int size)
{
	int		*temp_stack;
	int		i;

	temp_stack = (int *)malloc(size * sizeof(int));
	if (!temp_stack)
		return (0);
	i = 0;
	while (i < size)
	{
		temp_stack[i] = stack[i];
		i++;
	}
	temporary_sort(temp_stack, size);
	*pivot = temp_stack[size / 2];
	free(temp_stack);
	return (1);
}

int	quicksort_a(t_stack *stack, int len, int count_r)
{
	int	pivot;
	int	numbers;

	if (check_sorted(stack->a, len, 0) == 1)
		return (1);
	numbers = len;
	if (len <= 3)
	{
		quicksort_three_stack_a_and_b(stack, len);
		return (1);
	}
	if (!pivot_of_numbers(&pivot, stack->a, len))
		return (0);
	while (len != numbers / 2 + numbers % 2)
	{
		if (stack->a[0] < pivot && (len--))
			pb(stack, 0);
		else if (++count_r)
			ra(stack, 0);
	}
	while (numbers / 2 + numbers % 2 != stack->size_a && count_r--)
		rra(stack, 0);
	return (quicksort_a(stack, numbers / 2 + numbers % 2, 0)
		&& quicksort_b(stack, numbers / 2, 0));
	return (1);
}

int	quicksort_b(t_stack *stack, int len, int count_r)
{
	int	pivot;
	int	numbers;

	if (check_sorted(stack->b, len, 1) == 1)
		while (len--)
			pa(stack, 0);
	if (len <= 3)
	{
		sort_three_b(stack, len);
		return (1);
	}
	numbers = len;
	if (!pivot_of_numbers(&pivot, stack->b, len))
		return (0);
	while (len != numbers / 2)
	{
		if (stack->b[0] >= pivot && len--)
			pa(stack, 0);
		else if (++count_r)
			rb(stack, 0);
	}
	while (numbers / 2 != stack->size_b && count_r--)
		rrb(stack, 0);
	return (quicksort_a(stack, numbers / 2 + numbers % 2, 0)
		&& quicksort_b(stack, numbers / 2, 0));
}
