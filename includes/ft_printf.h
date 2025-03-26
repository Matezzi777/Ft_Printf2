/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 03:30:01 by maxmart2          #+#    #+#             */
/*   Updated: 2025/03/26 00:57:01 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stdio.h>													//DELETE

// typedef enum e_bool
// {
// 	FALSE,
// 	TRUE
// }				t_bool;

// typedef enum e_types
// {
// 	CHAR,
// 	INT,
// 	UNSIGNED,
// 	STRING,
// 	HEXA,
// 	POINTER
// }				t_types;

// typedef struct s_arginfo
// {
// 	t_bool				left_adjusted;
// 	t_bool				zero_padded;
// 	t_bool				alt_form;
// 	t_bool				sign_space;
// 	t_bool				show_sign;
// 	int					precision;
// 	int					width;
// 	t_types				type;
// }				t_arginfo;

//ft_printf.c
int	ft_printf(const char *format, ...);
int	ft_print_character(char c);

#endif