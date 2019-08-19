#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int		count_bytes(char *filename)
{
	char c;
	int ret;
	int count;
	int file;

	file = open(filename, O_RDONLY);
	while (read(file, &c, 1))
	{
		count++;
	}
	close(file);
	return(count);
}

char	*read_file(char *filename)
{
	int file;
	char *str;
	int ret;
	int buf;

	file = open(filename, O_RDONLY);
	buf = count_bytes(filename);
	str = (char*)malloc(buf);
	ret = read(file, str, buf);
	close(file);
	return (str);
}
