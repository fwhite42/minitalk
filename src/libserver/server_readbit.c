/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   server_readbit.c                                        4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/02 03:23:10 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/08 14:06:32 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libserver.h"
#include"libft.h"
#include"liberror.h"
#include<signal.h>
#include"libftprintf.h"

extern t_server	g_server;

void	realloc_at_pid(pid_t pid)
{
	char	*new_str;
	size_t	current_capacity;

	current_capacity = g_server.msg_capacity[pid];
	new_str = ft_calloc(current_capacity * 2, sizeof(char));
	if (new_str == NULL)
		error_fatal("Out of memory", -69);
	g_server.msg_capacity[pid] *= 2;
	ft_memcpy(new_str, g_server.msg[pid], current_capacity);
	free(g_server.msg[pid]);
	g_server.msg[pid] = new_str;
}

void	server_readbit(pid_t pid, int signo)
{
	int	cursor;
	int	index;
	int	multiplier;
	int	value;

	cursor = g_server.msg_cursor[pid];
	index = g_server.msg_len[pid];
	if (index >= g_server.msg_capacity[pid])
		realloc_at_pid(pid);
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
