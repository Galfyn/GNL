#ifndef		GET_NEXT_LINE_H
# define	GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>


int		get_next_line(int fd, char **line);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
char    *ft_strchr(const char *s, int c);
char    *ft_strdup(const char *s1);
char	*ft_clean(char *remain);
void	*ft_memset(void *b, int c, size_t len);



#endif
