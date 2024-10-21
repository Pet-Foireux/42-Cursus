/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:00:35 by mpapin            #+#    #+#             */
/*   Updated: 2024/10/21 15:20:41 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	while (src[i] && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
	{
		dst[i] = '\0';
		i++;
	}
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char dest[20];
// 	const char *src = "Hello, World!";
// 	size_t result = ft_strlcpy(dest, src, sizeof(dest));
// 	printf("Copied: %s, Length: %zu\n", dest, result);
// 	return (0);
// }
