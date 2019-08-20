int		ft_atoi(char *str)
{
	int n;
	int s;

	n = 1;
	s = 0;
	while (*str <= 32)
		str++;
	if (*str == '-')
	{
		n = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		s = s * 10 + (*str - '0');
		str++;
	}
	return (s * n);
}
