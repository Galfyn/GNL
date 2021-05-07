#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFF_SIZE 2


int	get_next_line(int fd, char **line);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
char    *ft_strchr(const char *s, int c);
char    *ft_strdup(const char *s1);
int		main(void);


#endif
