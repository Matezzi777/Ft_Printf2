/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 03:24:08 by maxmart2          #+#    #+#             */
/*   Updated: 2025/02/26 07:13:27 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		written;

	va_start(args, format);
	written = 0;
	i = 0;
	while (format[i])
	{
		while (format[i] != '%')
		{
			
		}
		i++;
	}
	va_end(args);
}