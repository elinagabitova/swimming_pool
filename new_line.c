char **malloc_str(char*str)
{
	while
}

char **new_line(char *str)
{
	int i;
	int j;
	char **res;

	i = 0;
	j = 0;
	while (*str)
		{
			if (*str == '\n' && *(str + 1) != '\0')
				{
					res[i][j] = '\0';
					str++;
					i++;
					j = 0;
				}
			else
			{
			res[i][j] = *str;
			j++;
			str++;
			}
		}
	return (res);
}
