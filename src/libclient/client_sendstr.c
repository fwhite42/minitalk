/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   client_sendstr.c                                        4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/02 03:32:57 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/08 11:18:31 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libclient.h"
#include"libftprintf.h"

void	client_sendstr(t_client *self, char *s)
{
	while (*s)
		client_sendchar(self, *s++);
	client_sendchar(self, 0);
}
