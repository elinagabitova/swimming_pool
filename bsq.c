#include "bsq.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char *str;

	str = read_file("map.txt");
	printf("%s\n", str);
	return(0);
}
//просмотрено
