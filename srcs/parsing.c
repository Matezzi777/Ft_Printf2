/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 03:54:28 by maxmart2          #+#    #+#             */
/*   Updated: 2025/03/12 23:28:53 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

t_list	*parse_arguments(const char *format, va_list arglist)
{
	t_list	*params;
	int		i;

	params = NULL;
	i = 0;
	while (format[i])
	{
		while (format[i] != '%')
			i++;
		if (format[i])
		{
			if (!add_param(format, &i, params, arglist))
				return ((t_list *)clean_exit(0, params, arglist));
		}
	}
	return (params);
}

int	test_parsing(t_list *params, va_list arglist)
{
	printf("Arguments found : %d\n", ft_lstsize(params));
	return (clean_exit(0, params, arglist));
}