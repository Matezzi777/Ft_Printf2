/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:57:39 by maxmart2          #+#    #+#             */
/*   Updated: 2025/04/13 16:28:47 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_integer(int n)
{
	int	written;

	ft_putnbr_fd(n, 1);
	if (n == -2147483648)
		return (11);
	written = 1;
	if (n < 0)
	{
		written++;
		n *= -1;
	}
	while (n / 10)
	{
		n /= 10;
		written++;
	}
	return (written);
}
