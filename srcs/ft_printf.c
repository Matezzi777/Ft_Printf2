/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 03:37:11 by maxmart2          #+#    #+#             */
/*   Updated: 2025/03/26 00:46:11 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

// static int	print_result(const char *format, t_list *params);

int	ft_printf(const char *str)
{
	ft_putendl_fd((char *)str, 1);
	return (1);
}

// static int	print_result(const char *format, t_list *params)
// {
	
// }