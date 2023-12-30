#include "includes/push_swap.h"

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

char	*ft_substr(char const *s, unsigned int start, int len)
{
	char			*c;
	unsigned int	i;
	unsigned int	j;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = (unsigned int)len;
	if (ft_strlen((char *)s) <= len)
		c = (char *) malloc(ft_strlen((char *)s) + 1);
	else
		c = (char *) malloc(j + 1);
	if (!c)
		return (NULL);
	if (!((unsigned int) ft_strlen((char *)s) < start))
	{
		while (s[i] != '\0' && i < j)
		{
			c[i] = s[start];
			i++;
			start++;
		}
	}
	c[i] = '\0';
	return (c);
}

static size_t	get_word(const char *string_to_split, char separator)
{
	size_t	number_of_words;

	number_of_words = 0;
	while (*string_to_split)
	{
		if (*string_to_split != separator)
		{
			number_of_words++;
			while (*string_to_split && *string_to_split != separator)
				string_to_split++;
		}
		else
			string_to_split++;
	}
	return (number_of_words);
}

char	**ft_split(const char *s, char c)
{
	char	**number_of_words;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	number_of_words = malloc(sizeof(char *) * (get_word(s, c) + 1));
	if (!number_of_words)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			number_of_words[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	number_of_words [i] = 0;
	return (number_of_words);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
}
