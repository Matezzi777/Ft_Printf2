/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 03:24:08 by maxmart2          #+#    #+#             */
/*   Updated: 2025/03/06 01:12:23 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int			i;
	int			written;
	va_list		args;
	t_arginfo	*parsed_args;

	written = 0;
	va_start(args, format);
	parsed_args = parse_arguments(format, args);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			written = treat_argument(parsed_args);
			parsed_args = parsed_args->next;
			i++;
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			written++;
		}
		i++;
	}
	va_end(args);
	return (written);
}