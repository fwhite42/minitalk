/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   client_sendbit.c                                        4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/02 03:32:35 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/02 03:32:37 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libclient.h"
#include"liberror.h"
#include"libftprintf.h"
#include<unistd.h>

void	client_sendbit(t_client *self, int bit)
{
	int	success;

	if (bit == 1)
		success = kill(self->pid, self->one);
	else if (bit == 0)
		success = kill(self->pid, self->zero);
	else
	{
		error_fatal("Client can send only bits, what did you do?", 0);
		return ;
	}
	if (success == -1)
		error_fatal("Invalid pid", 0);
	usleep(100);
}
