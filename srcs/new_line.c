#include "bsq.h"

char **ultra_malloc(char *str)
{
	char **arr;
	char *str1;
	int count;
	int i;

	count = 0;
	str1 = str;
	while (*str++)
		if (*str == '\n')
			count++;
	arr = (char**)malloc(count * sizeof(char));
	count = 0;
	i = 0;
	while (*str1++)
	{
		if (*str1 == '\n')
		{
			arr[count] = (char*)malloc(i * sizeof(char) + 1);
			i = 0;
			count++;
		}
		i++;
	}
	return (arr);
}

char **new_line(char *str)
{
	int i;
	int j;
	char **res;

	i = 0;
	j = 0;
	res = ultra_malloc(str);
	while (*str)
		{
			if (*str == '\n')
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
