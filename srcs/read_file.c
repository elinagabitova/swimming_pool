/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 20:43:14 by rdiane            #+#    #+#             */
/*   Updated: 2019/08/20 15:06:54 by rdiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

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
