/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   client_bonus.c                                          4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/02 03:40:44 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/08 14:36:32 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libserver.h"

t_server	g_server;

int	main(int ac, char **av)
{
	t_client	self;

	server_config();
	client_config(&self, ac, av);
	g_server.client = &self;
	client_sendstr(&self, av[2]);
	server_start(0);
	return (0);
}
