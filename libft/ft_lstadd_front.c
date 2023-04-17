/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <abuonomo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:46:44 by abuonomo          #+#    #+#             */
/*   Updated: 2023/02/02 19:48:01 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
-Prototype
void ft_lstadd_front(t_list **lst, t_list *new);
Turn in files -
-Parameters
lst: The address of a pointer to the first link of a list.
new: The address of a pointer to the node to be added to the list.
-Return value
None
-External functs.
None
-Description
Adds the node ’new’ at the beginning of the list.
*/
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	if (*lst)
		new->next = *lst;
	*lst = new;
}
