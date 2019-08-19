/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makestack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 12:37:10 by rdiane            #+#    #+#             */
/*   Updated: 2019/08/18 22:42:29 by rdiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_evalexpr.h"
#include <stdio.h>
#include <stdlib.h>

char	*g_str;

s_stack *stackcreate(void)
{
	char *temp;
	int i;

	i = -1;
	temp = malloc(sizeof(char*));
	if (*g_str >= '0' && *g_str <= '9')
	{
		while (*g_str >= '0' && *g_str <= '9')
		{
			temp[++i] = *g_str;
			g_str++;
		}
		temp[++i] = '\0';
		return(ft_create_elem(temp, 0));
	}
	temp[0] = *g_str;
	if (*g_str == '+' || *g_str == '-')
		return (ft_create_elem(temp, 1));
	if (*g_str == '*' || *g_str == '/' || *g_str == '%')
		return (ft_create_elem(temp, 2));
	if (*g_str == '(' || *g_str == ')')
		return (ft_create_elem(temp, 4));
	return (ft_create_elem(temp, 0));
}

s_stack	ft_makestack(char *str)
{
	s_stack *s_str;
	s_stack *s_fst;

	g_str = str;
	s_str = stackcreate();
	g_str++;
	s_fst = s_str;
	while (*g_str)
	{
		s_str->next = stackcreate();
		s_str = s_str->next;
		if (*g_str)
			g_str++;
		if (*g_str == ' ')
			g_str++;
	}
	return (s_fst);
}
