/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 03:30:01 by maxmart2          #+#    #+#             */
/*   Updated: 2025/03/01 00:54:17 by maxmart2         ###   ########.fr       */
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

int		ft_printf(const char *format, ...);
t_bool	valid_format(char *format);
int		display_until_arg(char *format, int *i);
int		display_arg(char *format, int *i);
int		clean_return(va_list args, int total);

#endif