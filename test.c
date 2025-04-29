#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	expect_value;
	int	return_value;
	int	var = 42;

	printf("TESTS %%d / %%i :\n");
	expect_value = printf("%p -> %d\n", &var, var);
	return_value = ft_printf("%p -> %d\n", &var, var);
	printf("Returned values : %d | %d\n", expect_value, return_value);
}