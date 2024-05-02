/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   client.c                                                4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/02 03:40:44 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/02 03:48:15 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include"libclient.h"
#include<signal.h>
#include<unistd.h>
#include"liberror.h"

int	main(int ac, char **av)
{
	t_client	self;

	client_config(&self, ac, av);
	client_sendstr(&self, av[2]);
	return (0);
}
