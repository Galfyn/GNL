
#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	char buf[BUFF_SIZE + 1];
	static char *remain;
	size_t size_buf;

	remain = "";
	size_buf = 1;
	while (!ft_strchr(buf,'\n') && (size_buf > 0))
	{
		size_buf = read(fd, buf, BUFF_SIZE);
		buf[size_buf] = '\0';
		remain = ft_strjoin(remain, buf);
	}
	*line = ft_strdup(remain);
	ft_clean(remain);
	if (size_buf == 0)
		return (0);
	return (1);
}