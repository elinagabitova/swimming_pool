/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 20:37:08 by rdiane            #+#    #+#             */
/*   Updated: 2019/08/19 21:13:51 by rdiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
