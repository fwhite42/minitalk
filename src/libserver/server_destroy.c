/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   server_destroy.c                                        4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/08 14:46:54 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/08 14:46:55 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libserver.h"

extern t_server	g_server;

void	server_destroy(void)
{
	int	pid;

	pid = 0;
	while (pid < MAX_CLIENTS)
		free(g_server.msg[pid++]);
}
