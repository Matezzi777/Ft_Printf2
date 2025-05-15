/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:57:39 by maxmart2          #+#    #+#             */
/*   Updated: 2025/05/15 05:40:39 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(int n)
{
	char	car;

	if (n == INT32_MIN)
		write(1, "-2147483648", 11);
	else if (n < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-n);
	}
	else if (0 <= n && n <= 9)
	{
		car = n + '0';
		write(1, &car, 1);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int	ft_print_integer(int n)
{
	int	written;

	ft_putnbr(n);
	if (n == INT32_MIN)
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
