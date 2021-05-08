
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
	str = (char *)malloc(sizeof (char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\n')
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_clean(char *remain)
{
	size_t i;
	size_t j;
	char *tmp;

	i = 0;
	tmp = "";
	while (remain[i] != '\n' && remain[i] != '\0')
		i++;
	if (remain[i] == '\0')
	{
		//free(remain);
		return (NULL);
	}
	if (remain[i] == '\n')
	{
		j = 0;
		i++;
		tmp = malloc(sizeof (char) * (ft_strlen(remain) - i));
		while (remain[i] != '\0')
			tmp[j++] = remain[i++];
		free(remain);
	}
	return (tmp);
}





/*char	*ft_copy(void *dst, void *src)
{
	size_t i;
	char *temp;
	char *s;

	i = 0;
	s = (char *)src;
	temp = (char *)dst;
	while (s[i] != '\n' || s[i] != '\0')
		i++;
	temp = malloc(sizeof (char) * i + 1);
	if (temp == NULL)
		return (NULL);
	temp[i] = '\0';
	while (i--)
		temp[i] = s[i];
	return (temp);
}
*/