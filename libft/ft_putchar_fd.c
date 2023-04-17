/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <abuonomo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:01:28 by abuonomo          #+#    #+#             */
/*   Updated: 2023/02/02 19:50:41 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters
c: The character to output.
fd: The file descriptor on which to write.
Return
value None
External functs. write
Description
Outputs the character ’c’ to the given file descriptor.
*/
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
