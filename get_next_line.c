
#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	char *buf;
	static char *remain;
	size_t size_buf;
	char *tmp;

	size_buf = 1;
	buf = malloc(sizeof (char) * (BUFFER_SIZE + 1));
	if (size_buf < 0 || line == NULL || fd <= 0)
		return (-1);
	while ((remain == NULL || !ft_strchr(buf,'\n')) && (size_buf > 0))
	{
		size_buf = read(fd, buf, BUFFER_SIZE);
		buf[size_buf] = '\0';
//		tmp = remain;
		remain = ft_strjoin((char *)remain, buf);
//		if (tmp)
//			free(tmp);
//		if (!remain)
//			return (-1);
	}
	*line = ft_strdup(remain);
	remain = ft_clean(remain);
	free(buf);
	if (size_buf == 0)
		return (0);
	return (1);
}