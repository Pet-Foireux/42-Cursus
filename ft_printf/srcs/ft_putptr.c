/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:42:48 by mpapin            #+#    #+#             */
/*   Updated: 2024/09/17 14:42:48 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long long	addr;
	int					nb_caracter;
	int					hex_length;
	unsigned long long	temp_addr;

	addr = (unsigned long long)ptr;
	nb_caracter = 0;
	if (!addr)
		return (write(1, "(nil)", 5));
	nb_caracter += write(1, "0x", 2);
	hex_length = 0;
	temp_addr = addr;
	while (temp_addr > 0)
	{
		hex_length++;
		temp_addr /= 16;
	}
	ft_puthex(addr, 'x');
	nb_caracter += hex_length;
	return (nb_caracter);
}
