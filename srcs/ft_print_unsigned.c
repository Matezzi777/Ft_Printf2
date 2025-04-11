/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:57:37 by maxmart2          #+#    #+#             */
/*   Updated: 2025/04/11 15:57:43 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_unsigned(unsigned int n)
{
	char	c;

	if (n <= 9)
	{
		c = n + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_put_unsigned(n / 10);
		ft_put_unsigned(n % 10);
	}
}

int	ft_print_unsigned(unsigned int n)
{
	int	written;

	ft_put_unsigned(n);
	written = 1;
	while (n / 10)
		written++;
	return (written);
}