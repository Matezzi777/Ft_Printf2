#include <stdio.h>

typedef enum e_bool
{
	FALSE,
	TRUE
}				t_bool;

t_bool	is_in_set(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[++i])
		if (s[i] == c)
			return (TRUE);
	return (FALSE);
}

t_bool	valid_format(char *format)
{
	int	i;

	i = 0;
	while (format[i])
	{
		while (format[i] && format[i] != '%')
			i++;
		i++;
		if (format[i] && !is_in_set("cspdiuxX%# +-.0123456789", format[i]))
			return (FALSE);
		while (format[i] && is_in_set("-0# +", format[i]))
			i++;
		if (format[i] && !is_in_set("cspdiuxX%.123456789", format[i]))
			return (FALSE);
		if (format[i] == '.')
			i++;
		if (format[i] && !is_in_set("cspdiuxX%123456789", format[i]))
			return (FALSE);
		while (format[i] && is_in_set("123456789", format[i]))
			i++;
		if (format[i] && !is_in_set("cspdiuxX%", format[i]))
			return (FALSE);
		i++;
	}
	return (TRUE);
}


int	main(int argc, char **argv)
{
	char *str;

	if (argc != 2)
		return 0;
	str = argv[1];
	printf("FORMAT : %s --> %d\n", str, valid_format(str));
}