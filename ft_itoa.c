

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*ptr;
	char	signe;
	int	i;
	int	nbr;

	nbr = n;
	i = 0;
	signe = 0;

	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}

	if (n == 0)
	{
		ptr = (char *)malloc(2);
		if (ptr)
		{
			ptr[0] = '0';
			ptr[1] = '\0';
		}
		return (ptr);
	}
	if (n < 0)
	{
		signe = "-";
		n = -n;
		i++;
	}

	ptr = (char *)malloc(i + 1);
	if (!(ptr))
		return (NULL);
	ptr[i] = '\0';
	while (n != 0)
	{
		i--;
		ptr[i] = (n % 10) + 48;
		n /= 10;
	}
	if (signe)
		ptr[0] = signe;
	*ptr = '\0';
	return (ptr);
}
