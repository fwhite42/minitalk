/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   server_print_message.c                                  4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/02 03:23:27 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/08 11:59:41 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libserver.h"
#include"libftprintf.h"

extern t_server	g_server;

void	server_print_message(pid_t pid)
{
	char	*str;

	str = g_server.msg[pid];
	ft_printf("\n[%i]:%s\n", pid, str);
}
