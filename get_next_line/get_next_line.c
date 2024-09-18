/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:35:12 by mpapin            #+#    #+#             */
/*   Updated: 2024/09/18 14:35:12 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_and_store_data(int file_descriptor, char *stored_data)
{
	char	*buffer;
	int		bytes_read;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);

	bytes_read = 1;
	while (!ft_strchr(stored_data, '\n') && bytes_read != 0)
	{
		bytes_read = read(file_descriptor, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		stored_data = ft_strjoin(stored_data, buffer);
	}
	free(buffer);
	return (stored_data);
}

char	*get_next_line(int file_descriptor)
{
	char		*next_line;
	static char	*unprocessed_data;

	if (file_descriptor < 0 || BUFFER_SIZE <= 0)
		return (0);

	unprocessed_data = read_and_store_data(file_descriptor, unprocessed_data);
	if (!unprocessed_data)
		return (NULL);

	next_line = ft_get_line(unprocessed_data);
	unprocessed_data = ft_new_left_str(unprocessed_data);

	return (next_line);
}

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Erreur lors de l'ouverture du fichier.\n");
		return (1);
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}
