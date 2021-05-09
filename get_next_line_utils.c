
#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*str;

	if (!s2)
		return (NULL);
	if ((char *)s1 == NULL)
		s1 = "";
	i = 0;
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		str[i++] = *s1++;
	}
	while (*s2 !='\0')
	{
		str[i++] = *s2++;
	}
	str[i] = '\0';
	return (str);
}

char    *ft_strchr(const char *s, int c)
{
	size_t  i;
	char *str;

	str = (char *) s;
	i = 0;
	while (str[i] != (char) c)
	{
		if (str[i] == '\0')
			return (NULL);
		i++;
	}
	return (str + i);
}

char    *ft_strdup(const char *s1)
{
	size_t		len;
	size_t		i;
	char		*str;

	i = 0;
	len = ft_strlen(s1);
	str = (char *)malloc(sizeof (char) * (len));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\n' && s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	//str[i] = '\0';
	return (str);
}

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*dest;

	dest = (unsigned char *)b;
	i = 0;
	while (len != 0)
	{
		dest[i] = c;
		len--;
		i++;
	}
	return (b);
}

char	*ft_clean(char *remain)
{
	size_t i;
	size_t j;
	size_t len;
	char *tmp;

	i = 0;
	tmp = "";
	while (remain[i] != '\n' && remain[i] != '\0')
		i++;
	if (remain[i] == '\0')
	{
		free(remain);
		return (NULL);
	}
	if (remain[i] == '\n')
	{
		j = 0;
		i++;
		len = (ft_strlen(remain) - i);
		tmp = malloc(sizeof (char) * len + 1);
		if (!tmp)
			return (NULL);
		while (remain[i] != '\0')
			tmp[j++] = remain[i++];
		ft_memset(remain, 0, ft_strlen(remain));
//		free(remain);
	}
	return (tmp);
}
