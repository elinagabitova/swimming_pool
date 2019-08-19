#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

#define BUF_SIZE 4096

char	*read_file(char *filename)
{
	int file;
	char str[BUF_SIZE + 1];
	char *str1;
	int ret;

	file = open(filename, O_RDONLY);
	ret = read(file, str, BUF_SIZE);
	str1 = str;
	return (str1);
}
