/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 19:32:27 by rdiane            #+#    #+#             */
/*   Updated: 2019/08/18 21:24:46 by rdiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_evalexpr.h"

s_stack    *ft_create_elem(char *data, int p)
{
	s_stack *elem;

	elem = malloc(sizeof(s_stack));
	elem->data = data;
	elem->next = NULL;
	elem->prior = p;
	return (elem);
}
