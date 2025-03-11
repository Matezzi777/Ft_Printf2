/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 03:30:01 by maxmart2          #+#    #+#             */
/*   Updated: 2025/03/11 04:24:22 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

typedef enum e_bool
{
	FALSE,
	TRUE
}				t_bool;

typedef struct s_arginfo
{
	t_bool				left_adjusted;
	t_bool				zero_padded;
	t_bool				alt_form;
	t_bool				sign_space;
	t_bool				show_sign;
	int					precision;
	int					width;
	char				type;
	struct s_arginfo	*next;
}				t_arginfo;

//parsing.c
t_list	*parse_arguments(const char *format, va_list arglist);
//utils.c
int		clean_exit(int value, t_arginfo *params, va_list arglist);

#endif