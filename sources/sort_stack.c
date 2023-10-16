/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiharel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:13:45 by wiharel           #+#    #+#             */
/*   Updated: 2022/06/27 13:45:25 by wiharel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_1(t_list **st, int *cnt, char stack_name)
{
	rotate(st, stack_name, cnt);
	swap(st, stack_name, cnt);
	reverse_rotate(st, stack_name, cnt);
}

void	sort_2(t_list **st, int *cnt, char stack_name)
{
	swap(st, stack_name, cnt);
}

void	sort_3(t_list **st, int *cnt, char stack_name)
{
	rotate(st, stack_name, cnt);
	swap(st, stack_name, cnt);
	reverse_rotate(st, stack_name, cnt);
	swap(st, stack_name, cnt);
}

void	sort_4(t_list **st, int *cnt, char stack_name)
{
	swap(st, stack_name, cnt);
	rotate(st, stack_name, cnt);
	swap(st, stack_name, cnt);
	reverse_rotate(st, stack_name, cnt);
}

void	sort_5(t_list **st, int *cnt, char stack_name)
{
	swap(st, stack_name, cnt);
	rotate(st, stack_name, cnt);
	swap(st, stack_name, cnt);
	reverse_rotate(st, stack_name, cnt);
	swap(st, stack_name, cnt);
}
