/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:00:51 by mpapin            #+#    #+#             */
/*   Updated: 2024/10/15 17:23:58 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	len_n;
	size_t	i;
	size_t	j;

	if (!str || !to_find)
		return (NULL);
	if (ft_strlen(to_find) == 0)
		return ((char *) str);
	len_n = ft_strlen(to_find);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j] && i + j < len)
			j++;
		if (j == len_n)
			return ((char *) str + i);
		i++;
	}
	return (NULL);
}
