#include "libft.h"

int	ft_len(int n)
{
	int		len;

	len = 0;
	while (n /= 10)
		len++;
	return (len);
}
