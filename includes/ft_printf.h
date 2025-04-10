/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 03:30:01 by maxmart2          #+#    #+#             */
/*   Updated: 2025/04/10 18:35:52 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stdio.h>													//DELETE

typedef enum e_bool
{
	FALSE,
	TRUE
}				t_bool;

//ft_printf.c
int	ft_printf(const char *format, ...);
int	ft_print_character(char c);
int	ft_print_string(char *str);
int ft_print_hexa(int nbr, t_bool maj);
int	ft_print_integer(int nbr);
int	ft_print_unsigned(unsigned int nbr);
int	ft_print_address(void *addr);

#endif