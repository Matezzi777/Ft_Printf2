/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 03:37:11 by maxmart2          #+#    #+#             */
/*   Updated: 2025/03/11 05:03:36 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

// static int	print_result(const char *format, t_list *params);

int	ft_printf(const char *format, ...)
{
	va_list		arglist;
	t_list		*params;

	va_start(arglist, format);
	params = parse_arguments(format, arglist);

	return (test_parsing(params, arglist));

	// if (!params)
	// 	return (clean_exit(0, params, arglist));
	// return (clean_exit(print_result(format, params), params, arglist));
}

// static int	print_result(const char *format, t_list *params)
// {
	
// }