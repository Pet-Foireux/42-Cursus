/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 23:36:17 by mpapin            #+#    #+#             */
/*   Updated: 2024/09/16 23:36:17 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int ft_putstr(char *str)
{
	int j = 0;

	if (!str)
		str = "(null)";
	while (str[j])
	{
		ft_putchar(str[j]);
		j++;
	}
	return (j);
}

int ft_putnbr(int n)
{
    int nb_caracter = 0;

    if (n == -2147483648)
        return (ft_putstr("-2147483648"));
    if (n < 0)
    {
        nb_caracter += ft_putchar('-');
        n = -n;
    }
    if (n > 9)
        nb_caracter += ft_putnbr(n / 10);
    nb_caracter += ft_putchar((n % 10) + '0');
    
    return (nb_caracter);
}

int ft_puthex(unsigned int num, char format)
{
    int nb_caracter = 0;
    char *base;

    if (format == 'x')
        base = "0123456789abcdef";
    else
        base = "0123456789ABCDEF";

    if (num >= 16)
        nb_caracter += ft_puthex(num / 16, format);
    nb_caracter += ft_putchar(base[num % 16]);
    
    return (nb_caracter);
}

int ft_putptr(void *ptr)
{
    unsigned long long addr;
    int nb_caracter = 0;

    addr = (unsigned long long)ptr;
    if (!addr)
    {
        nb_caracter += write(1, "(nil)", 5);
        return nb_caracter;
    }
    nb_caracter += write(1, "0x", 2);

    int hex_length = 0;
    unsigned long long temp_addr = addr;
    while (temp_addr > 0)
    {
        hex_length++;
        temp_addr /= 16;
    }
    
    ft_puthex(addr, 'x');
    nb_caracter += hex_length;
    return nb_caracter;
}

int ft_putnsigned(unsigned int n)
{
    int nb_caracter = 0;

    if (n > 9)
        nb_caracter += ft_putnsigned(n / 10);
    nb_caracter += ft_putchar((n % 10) + '0');
    
    return (nb_caracter);
}

int ft_putpercent(void)
{
    return (ft_putchar('%'));
}

int	ft_formats(va_list args, const char format)
{
	int nb_caracter = 0;

	if (format == 'c')
		nb_caracter += ft_putchar(va_arg(args, int));
	else if (format == 's')
		nb_caracter += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		nb_caracter += ft_putptr(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		nb_caracter += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		nb_caracter += ft_putnsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		nb_caracter += ft_puthex(va_arg(args, unsigned int), format);
	else if (format == '%')
		nb_caracter += ft_putpercent();
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
    ft_printf("%s\n", "Hello, world!");
    ft_printf("%d\n", 123456789);
    ft_printf("%i\n", 42);
	int a = 4123123;
	ft_printf("%p\n", &a);
    ft_printf("%u\n", 42);
    ft_printf("%x\n", 255);
    ft_printf("%X\n", 255);
    ft_printf("C%%\n");
    return (0);
}