/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 20:37:08 by rdiane            #+#    #+#             */
/*   Updated: 2019/08/19 22:53:40 by rdiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
