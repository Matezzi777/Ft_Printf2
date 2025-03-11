/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 03:54:28 by maxmart2          #+#    #+#             */
/*   Updated: 2025/03/11 05:03:26 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

t_list	*parse_arguments(const char *format, va_list arglist)
{
	(void)format;
	(void)arglist;
	return (NULL);
}

int	test_parsing(t_list *params, va_list arglist)
{
	printf("Arguments found : %d\n", ft_lstsize(params));
	return (clean_exit(0, params, arglist));
}