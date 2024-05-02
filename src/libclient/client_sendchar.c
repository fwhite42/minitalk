/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   client_sendchar.c                                       4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/02 03:32:46 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/02 03:32:49 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libclient.h"
#include"libftprintf.h"
#include"liberror.h"
#include<unistd.h>

void	client_sendchar(t_client *self, char c)
{
	int	i;

	i = 0;
	while (i < 8)
		client_sendbit(self, (c >> i++) & 1);
}
