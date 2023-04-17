/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <abuonomo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:08:37 by abuonomo          #+#    #+#             */
/*   Updated: 2023/02/02 19:51:45 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Parameters
s: The string to output.
fd: The file descriptor on which to write.
Return
value None
External functs. write
Description
Outputs the string ’s’ to the given file descriptor.
*/
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
