#include "ft_printf.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (ft_printf("Not enough args."));
	i = 0;
	while (++i < argc)
		ft_printf(argv[i]);
}