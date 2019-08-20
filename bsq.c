#include "bsq.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char *str;
	char **map;
	int i;

	str = read_file("map.txt");
	map = new_line(str);	
	while (i <= 16)
	{
		printf("%s\n", map[i]);
		i++;
	}
	return(0);
}
