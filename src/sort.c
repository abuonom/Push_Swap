/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <abuonomo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:07:50 by abuonomo          #+#    #+#             */
/*   Updated: 2023/04/17 16:55:41 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../ft_printf/ft_printf.h"

void	temporary_sort(int *stack_temp, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (stack_temp[i] > stack_temp[j])
			{
				temp = stack_temp[i];
				stack_temp[i] = stack_temp[j];
				stack_temp[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	three_numbers_stack_a(t_stack *three)
{
	if (three->a[0] > three->a[1] && three->a[0] < three->a[2]
		&& three->a[1] < three->a[2])
		sa(three, 0);
	if (three->a[0] > three->a[1] && three->a[0] > three->a[2]
		&& three->a[1] > three->a[2])
	{
		sa(three, 0);
		rra(three, 0);
	}
	if (three->a[0] > three->a[1] && three->a[0] > three->a[2]
		&& three->a[1] < three->a[2])
		ra(three, 0);
	if (three->a[0] < three->a[1] && three->a[0] < three->a[2]
		&& three->a[1] > three->a[2])
	{
		sa(three, 0);
		ra(three, 0);
	}
	if (three->a[0] < three->a[1] && three->a[0] > three->a[2]
		&& three->a[1] > three->a[2])
		rra(three, 0);
}

int	sort(t_stack *stack, int size)
{
	if (check_sorted(stack->a, stack->size_a, 0) == 0)
	{
		if (size == 2)
			sa(stack, 0);
		else if (size == 3)
			three_numbers_stack_a(stack);
		else
			quicksort_a(stack, size, 0);
	}
	return (0);
}

int	ft_push(t_stack *stack, int len, int push)
{
	if (push == 0)
		pb(stack, 0);
	else
		pa(stack, 0);
	len--;
	return (len);
}
