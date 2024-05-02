/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   server_readbit.c                                        4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/02 03:23:10 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/02 03:23:14 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libserver.h"
#include<signal.h>
#include"libftprintf.h"

extern t_server	g_server;

void	server_readbit(pid_t pid, int signo)
{
	int	cursor;
	int	index;
	int	multiplier;
	int	value;

	cursor = g_server.msg_cursor[pid];
	index = g_server.msg_len[pid];
	g_server.bit_counter++;
	multiplier = 1 << cursor;
	if (signo == SIGUSR1)
		value = 1;
	else if (signo == SIGUSR2)
		value = 0;
	else
		return ;
	g_server.msg[pid][index] += value * multiplier;
	g_server.msg_cursor[pid] += 1;
	server_update(pid);
}
