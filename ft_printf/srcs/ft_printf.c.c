// #include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_formats(va_list args, const char format)
{
	int	nb_caracter;

	nb_caracter = 0;
	if (format == 'c')
		nb_caracter += ft_putchar(va_arg(args, int));
	// else if (format == 's')
	// 	nb_caracter += ft_putstr(va_arg(args, char *));
	// else if (format == 'p')
	// 	nb_caracter += ft_putptr(va_arg(args, unsigned long long));
	// else if (format == 'd' || format == 'i')
	// 	nb_caracter += ft_prutnbr(va_arg(args, int));
	// else if (format == 'u')
	// 	nb_caracter += ft_putnsigned(va_arg(args, unsigned int));
	// else if (format == 'x' || format == 'X')
	// 	nb_caracter += ft_putex(va_arg(args, unsigned int), format);
	// else if (format == '%')
	// 	nb_caracter += ft_putpercent();
	return (nb_caracter);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		nb_caracter;

	i = 0;
	nb_caracter = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			nb_caracter += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			nb_caracter += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (nb_caracter);
}

int main()
{
    ft_printf("%c\n", 'C');
    // ft_printf("%s\n", "Hello, world!");
    // ft_printf("%d\n", -42);
    // ft_printf("%i\n", 42);
    // ft_printf("%u\n", 42);
    // ft_printf("%x\n", 255);
    // ft_printf("%X\n", 255);
    // ft_printf("C%%\n");
    return 0;
}