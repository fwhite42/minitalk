/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   server_clean_message.c                                  4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/02 03:25:12 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/02 03:25:16 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libserver.h"
#include"libft.h"

extern t_server	g_server;

void	server_clean_message(pid_t pid)
{
	ft_bzero(g_server.msg[pid], MAX_MSG_LEN);
	g_server.msg_len[pid] = 0;
}
