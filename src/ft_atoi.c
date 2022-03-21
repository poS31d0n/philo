
#include "philo.h"

int	ft_atoi(const char *str)
{
	long int	l;
	long int	a;

	l = 0;
	a = 1;
	while ((*str == ' ') || (*str == '\f') || (*str == '\n')
		|| (*str == '\r') || (*str == '\t') || (*str == '\v'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			a *= -1;
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		if (l * a > 2147483647)
			return (-1);
		if (l * a < -2147483648)
			return (0);
		l = l * 10 + ((int)*str - '0');
		str++;
	}
	return (l * a);
}
