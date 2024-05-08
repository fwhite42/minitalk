/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_morph.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwhite42 <FUCK THE NORM>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:25:31 by fwhite42          #+#    #+#             */
/*   Updated: 2024/04/16 16:55:46 by fwhite42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libarr.h"
#include<stddef.h>

void	arr_morph(void *self, void *(*fn)(), void *caller)
{
	int	i;

	if (fn == NULL)
		return ;
	i = 0;
	while (i < arr_length(self))
	{
		if (caller != NULL)
			arr_data(self)[i] = fn(caller, arr_data(self)[i], i);
		else
			arr_data(self)[i] = fn(arr_data(self)[i], i);
		i++;
	}
}
