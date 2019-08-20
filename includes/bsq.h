#ifndef BSQ_H
# define BSQ_H

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char	*read_file (char *filename);
char	**new_line (char *str);

#endif
