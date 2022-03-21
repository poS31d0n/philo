
#include "philo.h"

int	ft_strlen(const char *str)
{
	long	i;

	i = 0;
	if (str != NULL)
	{
		while (str[i] && str)
			i++;
	}
	return (i);
}