/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 20:37:08 by rdiane            #+#    #+#             */
/*   Updated: 2019/08/20 15:07:56 by rdiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
