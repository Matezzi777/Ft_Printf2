/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 00:54:42 by maxmart2          #+#    #+#             */
/*   Updated: 2025/03/06 01:06:36 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_arginfo	*new_argument(char *format)
{
	t_arginfo	*arg;

	arg = (t_arginfo *)malloc(sizeof(t_arginfo));
	if (!arg)
		return (NULL);
	arg->left_adjusted = FALSE;
	arg->zero_padded = FALSE;
	arg->alt_form = FALSE;
	arg->sign_space = FALSE;
	arg->show_sign = FALSE;
	arg->precision = -1;
	arg->width = 0;
	arg->type = '\0';
	arg->next = NULL;
	return (arg);
}