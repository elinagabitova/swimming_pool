/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 17:00:21 by rdiane            #+#    #+#             */
/*   Updated: 2019/08/14 22:00:11 by rdiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_create_elem(void *data);

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *first;

	if (begin_list != 0)
	{
		first = ft_create_elem(data);
		first->next = begin_list;
		*begin_list = first;
	}
	else
		*begin_list = ft_create_elem(data);
}
