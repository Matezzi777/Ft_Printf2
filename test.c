/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 05:41:54 by maxmart2          #+#    #+#             */
/*   Updated: 2025/05/15 05:42:16 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	expect_value;
	int	return_value;
	int	var;

	var = -1;
	printf("TESTS %%d / %%i :\n");
	expect_value = printf("%p -> %d\n", &var, var);
	return_value = ft_printf("%p -> %d\n", &var, var);
	printf("Returned values : %d | %d\n", expect_value, return_value);
}
