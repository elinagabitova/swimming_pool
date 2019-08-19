/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_evalexpr.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 11:39:07 by rdiane            #+#    #+#             */
/*   Updated: 2019/08/18 22:23:55 by rdiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EVALEXPR_H
# define FT_EVALEXPR_H

typedef struct  s_list
{
	struct  s_list  *next;
	char    *data;
	int     prior;
}               s_stack;

s_stack		*ft_create_elem(char *data, int p);

int			ft_atoi(char *str);
s_stack		ft_makestack(char *str)

#endif
