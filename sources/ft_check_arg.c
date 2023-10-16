/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiharel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:25:52 by wiharel           #+#    #+#             */
/*   Updated: 2022/06/27 13:44:08 by wiharel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

void	ft_print_error(void)
{
	int		i;
	char	*str;

	i = 0;
	str = "Error\n";
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	exit (0);
}

long long int	ft_atoi(char *str)
{
	long long int	i;
	long long int	res;
	long long int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = (-1) * sign;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

int	ft_check_arg(char **av, int j, int k)
{
	while (av[k])
	{
		if (ft_atoi(av[k]) > 2147483647 || ft_strlen(av[k]) > 10)
			ft_print_error();
		if ((ft_atoi(av[k]) < (-2147483648)) || (ft_strlen(av[k]) > 11
				&& (av[k][0] == '-')))
			ft_print_error();
		while (av[k][j])
		{
			if (av[k][j] == '-' && j == 0)
				j++;
			if (ft_isdigit(av[k][j]) == 0)
				ft_print_error();
			j++;
		}
		k++;
		j = 0;
	}
	return (1);
}
