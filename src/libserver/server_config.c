/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   server_config.c                                         4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/02 03:22:10 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/02 03:31:25 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libserver.h"
#include"libft.h"

extern t_server	g_server;

void	server_config(void)
{
	struct sigaction	action;

	ft_bzero(&g_server, sizeof(t_server));
	action.sa_sigaction = server_handle;
	action.sa_flags = SA_SIGINFO;
	sigemptyset(&action.sa_mask);
	sigaddset(&action.sa_mask, SIGUSR1);
	sigaddset(&action.sa_mask, SIGUSR2);
	sigaction(SIGUSR1, &action, 0);
	sigaction(SIGUSR2, &action, 0);
}
