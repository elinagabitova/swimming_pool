/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 22:24:25 by rdiane            #+#    #+#             */
/*   Updated: 2019/08/18 22:42:06 by rdiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_evalexpr.h"

int eval_expr(char *str)
{
	s_stack *stack;
	s_stack *number;
	s_stack *sign;
	s_stack **num_s;
	s_stack **sign_s;

	stack = ft_makestack(str);
	sign = ft_create_elem('\0', 5);
	number = ft_create_elem('\0', 5);
	*sign_s = sign;
	*num_s = number;
	while (stack->next != 0)
	{
		if (stack->prior == 0)
			ft_list_push_front(num_s, stack->data);
		else if (stack->next > 0)

	}
		
}
