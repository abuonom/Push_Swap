/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <abuonomo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:10:48 by abuonomo          #+#    #+#             */
/*   Updated: 2023/04/17 16:21:00 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *back, char *buff)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!back)
	{
		back = malloc(1 * sizeof(char));
		back[0] = '\0';
	}
	if (!back || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(back) + ft_strlen(buff)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (back)
		while (back[++i] != '\0')
			str[i] = back[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(back) + ft_strlen(buff)] = '\0';
	free (back);
	return (str);
}
