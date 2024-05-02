/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   client_config.c                                         4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/02 03:34:18 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/02 03:34:21 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libclient.h"
#include"liberror.h"
#include"libft.h"

void	client_config(t_client *self, int ac, char **av)
{
	if (ac != 3)
		error_fatal("Invalid number of arguments.", 0);
	self->pid = ft_atoi(av[1]);
	self->one = SIGUSR1;
	self->zero = SIGUSR2;
}
