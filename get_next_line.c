
#include "get_next_line.h"
#include <stdio.h>

int	get_next_line(int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	static char	*remain;
	size_t 		read_size;

	remain = "";
	while (read(fd, buf, BUFF_SIZE))
	{
			read_size = read(fd, buf, BUFF_SIZE);
			buf[read_size] = '\0';
			remain = ft_strjoin(remain, buf);
			if (!remain)
				return (-1);
	}
	*line = ft_strdup(remain);
	if(!*line)
		return (-1);
	free(remain);
	if (read_size)
		return (1);
	return (0);
}

