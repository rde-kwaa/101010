#include "libft.h"

size_t	ft_wordlen(char const *s, size_t i, size_t len, char c)
{
	len = 0;
	while (s[i + len] && (s[i + len] != c))
		len++;
	return (len);
}
