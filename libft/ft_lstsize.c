/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <abuonomo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:19:26 by abuonomo          #+#    #+#             */
/*   Updated: 2023/02/02 19:50:14 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name
ft_lstsize
Prototype
int ft_lstsize(t_list *lst);
Turn in files -
Parameters
lst: The beginning of the list.
Return value
The length of the list
External functs.
None
Description
Counts the number of nodes in a list.*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
