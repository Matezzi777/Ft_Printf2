/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:57:35 by maxmart2          #+#    #+#             */
/*   Updated: 2025/04/11 15:08:03 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_hexa(int n, t_bool maj)
{
	char	*format;

	if (maj)
		format = "0123456789ABCDEF";
	else
		format = "0123456789abcdef";
	if (n == -2147483648)
		write(1, "-80000000", 1);
	else if (0 <= n && n <= 15)
		write(1, &format[n], 1);
	else
	{
		ft_put_hexa(n / 16, maj);
		ft_put_hexa(n % 16, maj);
	}
}

int	ft_print_hexa(int n, t_bool maj)
{
	int	written;

	ft_put_hexa(n, maj);
	written = 1;
	if (written == -2147483648)
		return (9);
	while (n / 16)
		written++;
	return (written);
}