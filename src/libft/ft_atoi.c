/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                               4 2              */
/*                                                    +:+ +:+         +:+     */
/*   By: fwhite42 <FUCK THE NORM>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:29:07 by fwhite42          #+#    #+#             */
/*   Updated: 2024/05/11 18:34:41 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static inline int	ft_isspace(char c)
{
	if (c == 11 || c == 32 || c == 9 || c == 10 || c == 13 || c == 12)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	nbr;
	int	e;

	nbr = 0;
	e = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			e = -1;
	}
	while (ft_isdigit(*str))
	{
		nbr *= 10;
		nbr += *str - '0';
		str++;
	}
	return (e * nbr);
}
