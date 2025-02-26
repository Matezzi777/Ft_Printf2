/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 03:31:10 by maxmart2          #+#    #+#             */
/*   Updated: 2025/02/26 03:31:12 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*cursor;

	cursor = (unsigned char *)s;
	while (n--)
	{
		if (*cursor == (unsigned char)c)
			return ((void *)cursor);
		cursor++;
	}
	return (NULL);
}
