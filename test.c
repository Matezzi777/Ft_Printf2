#include "ft_printf.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (printf("Not enough params.\n"));
	i = 0;
	while (++i < argc)
	{
		ft_putstr_fd("\n\n\n", 1);
		ft_printf(argv[i]);
	}
}