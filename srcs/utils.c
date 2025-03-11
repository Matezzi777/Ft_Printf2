/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 03:58:35 by maxmart2          #+#    #+#             */
/*   Updated: 2025/03/11 05:03:13 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	clean_exit(int value, t_list *params, va_list arglist)
{
	if (params)
		ft_lstclear(&params, free);
	va_end(arglist);
	return (value);
}