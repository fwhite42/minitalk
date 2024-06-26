/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   server_update.c                                         4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/02 03:21:35 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/12 01:50:53 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libserver.h"
#include"libft.h"
#include"libftprintf.h"
#include<stddef.h>

extern t_server	g_server;

static void	update_as_server(pid_t pid)
{
	t_client	local_client;

	server_print_message(pid);
	server_clean_message(pid);
	local_client.pid = pid;
	local_client.zero = SIGUSR2;
	local_client.one = SIGUSR1;
	client_sendbit(&local_client, 1);
}

void	server_update(pid_t pid)
{
	int	index;

	index = g_server.msg_len[pid];
	if (g_server.client != NULL)
	{
		if (pid == g_server.client->pid)
		{
			ft_printf(ACK_MSG, pid);
			server_destroy();
			exit(0);
		}
	}
	if (g_server.msg_cursor[pid] == 8)
	{
		g_server.msg_cursor[pid] = 0;
		g_server.msg_len[pid] += 1;
		if (g_server.msg[pid][index] == 0)
		{
			if (g_server.client == NULL)
				update_as_server(pid);
		}
	}
}
