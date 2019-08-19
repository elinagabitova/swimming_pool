#include "bsq.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char *str;
	char **map;

	str = read_file("map.txt");
//	map = new_line(str);	
	printf("%s\n", str);
	return(0);
}
