/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiharel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:16:00 by wiharel           #+#    #+#             */
/*   Updated: 2022/06/20 17:36:32 by wiharel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				value;
	struct s_list	*next;
	struct s_list	*prev;
}				t_list;

typedef struct s_info
{
	int	pivot1;
	int	pivot2;
	int	ra;
	int	rb;
	int	pb;
	int	pa;
}				t_info;

long long	make_number(char *str);
void		sorting_three_a(t_list **st, int *num, int *cnt);
void		sorting_three_b(t_list **st, int *num, int *cnt);
void		sorting_under_three_a(t_list **st, int n, int *cnt);
void		sorting_under_three_b(t_list **st, int n, int *cnt);
void		seperate(t_list **from, t_list **to, int *cnt, int *stack_info);
void		sorting_five(t_list **from, t_list **to, int *cnt, char stack_name);
void		sort_1(t_list **st, int *cnt, char stack_name);
void		sort_2(t_list **st, int *cnt, char stack_name);
void		sort_3(t_list **st, int *cnt, char stack_name);
void		sort_4(t_list **st, int *cnt, char stack_name);
void		sort_5(t_list **st, int *cnt, char stack_name);
void		calc_atob(t_list **a, t_list **b, t_info *info, int *cnt);
void		ft_print_error(void);
void		atob(t_list **a, t_list **b, int n, int *cnt);
void		calc_btoa(t_list **b, t_list **a, t_info *info, int *cnt);
void		btoa(t_list **b, t_list **a, int n, int *cnt);
void		display(char *command, char stack_name);
void		free_stack(t_list **a, t_list **b);
void		free_str(char **str);
void		delete_item(t_list *item);
void		stack_push(t_list **st, t_list *new);
void		swap(t_list **lst, char stack_name, int *cnt);
void		push_ab(t_list **from, t_list **to, char stack_name, int *cnt);
void		rotate(t_list **lst, char stack_name, int *cnt);
void		reverse_rotate(t_list **lst, char stack_name, int *cnt);
void		rrr(t_list **a, t_list **b, t_info info, int *cnt);
int			ft_check_arg(char **av, int j, int k);
int			ft_isdigit(int c);
int			is_number(char *str);
int			ft_cnt(char **str);
int			is_sorted(t_list **st, int n);
int			is_duplicated(t_list **st);
int			is_valid(char **argv, t_list **st, int argc);
int			count_params(t_list **st);
int			main(int argc, char **argv);
int			is_empty(t_list **st);
int			find_max(t_list **st, int n);
int			find_min(t_list **st, int n);
int			find_pivot(int min, int max, double op);
int			check_atob(t_list **st1, t_list **st2, int n, int *cnt);
int			check_btoa(t_list **st1, t_list **st2, int n, int *cnt);
size_t		ft_strlcpy(char *dest, const char *src, size_t dest_size);
size_t		ft_strlen(const char *s);
char		**ft_split(char const *s, char c);

t_list		*new_item(int val);

t_list		*stack_pop(t_list **st);

#endif
