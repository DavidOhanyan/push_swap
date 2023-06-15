/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:56:36 by dohanyan          #+#    #+#             */
/*   Updated: 2023/06/15 15:47:25 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_parc_buf(char *buf)
{
	int		j;
	int		i;
	char	*rem;

	i = 0;
	j = 0;
	if (buf == 0 || *buf == 0)
		return (0);
	if (ft_strchr(buf, '\n') != NULL)
	{
		while (buf[i] != '\n')
			i++;
		if (buf[i] == '\n')
			i++;
		rem = (char *)malloc(sizeof(char) * ft_strlen(ft_strchr(buf, '\n')));
		if (!rem)
			return (NULL);
		while (buf[i] != '\0')
			rem[j++] = buf[i++];
		rem[j] = '\0';
		free(buf);
	buf = 0;
		return (rem);
	}
	return (0);
}

char	*ft_check(char *buf, char *result, int i)
{
	if (buf[i] == '\n')
	{
		result[i] = '\n';
		result[i + 1] = '\0';
	}
	else
	{
		result[i] = '\0';
		free(buf);
		buf = 0;
	}
	return (result);
}

char	*ft_parc1(char *buf)
{
	int		i;
	char	*result;

	i = 0;
	if (buf == 0 || *buf == 0)
	{
		if (buf)
			free(buf);
		return (0);
	}
	while (buf[i] != '\n' && buf[i] != '\0')
		i++;
	if (buf[i] == '\n')
		i++;
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (buf[i] != '\n' && buf[i] != '\0')
	{
		result[i] = buf[i];
		i++;
	}
	return (ft_check(buf, result, i));
}

char	*get_next_line(int fd)
{
	int			val;
	char		*result;
	char		mas[BUFFER_SIZE + 1];
	static char	*buf[OPEN_MAX];

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) == -1)
		return (NULL);
	while (1)
	{
		val = read(fd, mas, BUFFER_SIZE);
		if (val <= 0)
			break ;
		mas[val] = '\0';
		buf[fd] = ft_strjoin(buf[fd], mas);
		if (ft_strchr(buf[fd], '\n'))
			break ;
	}
	if (val < 0)
		return (0);
	result = (ft_parc1(buf[fd]));
	if (result)
		buf[fd] = ft_parc_buf(buf[fd]);
	return (result);
}
