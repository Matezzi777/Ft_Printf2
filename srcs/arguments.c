/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 00:49:37 by maxmart2          #+#    #+#             */
/*   Updated: 2025/03/01 03:05:57 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool	valid_format(char *format)
{
	int	i;
	char	*flags;

	i = 0;
	while (format[i])
	{
		while (format[i] && format[i] != '%')
			i++;
		if (format[i] && !ft_strchr("cspdiuxX%# +-.0123456789", format[i]))
			return (FALSE);
		while (ft_strchr("-0# +", format[i]))
			i++;
		if (format[i] && !ft_strchr("cspdiuxX%.123456789", format[i]))
			return (FALSE);
		if (format[i] == '.')
			i++;
		if (!ft_strchr("cspdiuxX%123456789", format[i]))
			return (FALSE);
		while (ft_strchr("123456789", format[i]))
			i++;
		if (format[i] && !ft_strchr("cspdiuxX%", format[i]))
			return (FALSE);
	}
	return (TRUE);
}
