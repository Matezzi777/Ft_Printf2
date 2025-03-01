/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 03:24:08 by maxmart2          #+#    #+#             */
/*   Updated: 2025/03/01 00:54:03 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		total;
	int		written;

	if (!valid_format(format))
		return (-1);
	va_start(args, format);
	total = 0;
	i = 0;
	while (format[i])
	{
		written = display_until_arg(format, &i);
		if (written == 0)
			return (clean_return(args, total));
		total = total + written;
		written = display_arg(format, &i);
		if (written == 0)
			return (clean_return(args, total));
		total = total + written;
	}
	return (clean_return(args, total));
}