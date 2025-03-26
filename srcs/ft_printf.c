/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 03:37:11 by maxmart2          #+#    #+#             */
/*   Updated: 2025/03/26 01:00:30 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static int	print_result(const char *format, t_list *params);

int	ft_printf(const char *format, ...)
{
	int	written;
	int i;

	i = 0;
	while (format[i])
	{
		while (format[i] && format[i] != '%')
			written += ft_print_character(format[i++]);
		while (format[i] && ft_is_char_in_set(format[++i], ""))
	}
}

// static int	print_result(const char *format, t_list *params)
// {
	
// }