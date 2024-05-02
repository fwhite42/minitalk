/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   server.c                                                4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/02 03:35:11 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/02 03:35:13 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"signal.h"
#include"libftprintf.h"
#include"liberror.h"
#include<stddef.h>
#include"libserver.h"
#include<unistd.h>

t_server	g_server;

int	main(void)
{
	server_config();
	server_start();
	return (0);
}
