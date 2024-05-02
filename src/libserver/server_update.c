/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   server_update.c                                         4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/02 03:21:35 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/02 03:21:45 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libserver.h"

extern t_server	g_server;

void	server_update(pid_t pid)
{
	int	index;

	index = g_server.msg_len[pid];
	if (g_server.msg_cursor[pid] == 8)
	{
		g_server.msg_cursor[pid] = 0;
		g_server.msg_len[pid] += 1;
		if (g_server.msg[pid][index] == 0 || index == MAX_MSG_LEN)
		{
			server_print_message(pid);
			server_clean_message(pid);
		}
	}
}
