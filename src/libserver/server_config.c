/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   server_config.c                                         4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/02 03:22:10 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/08 14:40:27 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libserver.h"
#include"liberror.h"
#include"libft.h"
#include"libftprintf.h"

extern t_server	g_server;

static void	init_msg_arrays(void)
{
	int					pid;
	
	pid = 0;
	while (pid < MAX_CLIENTS)
	{
		g_server.msg[pid] = ft_calloc(STD_MSG_CAPACITY, sizeof(char));
		if (g_server.msg[pid] == NULL)
			error_fatal("Out of Memory", -69);
		g_server.msg_capacity[pid] = STD_MSG_CAPACITY;
		pid++;
	}
}

static void	set_main_action(void)
{
	struct sigaction	action;

	action.sa_sigaction = server_handle;
	action.sa_flags = SA_SIGINFO;
	sigemptyset(&action.sa_mask);
	sigaddset(&action.sa_mask, SIGUSR1);
	sigaddset(&action.sa_mask, SIGUSR2);
	sigaction(SIGUSR1, &action, 0);
	sigaction(SIGUSR2, &action, 0);

}

static void	on_ctrl_c(int signo)
{
	if (signo == SIGINT)
	{
		ft_printf("Gracefully closing the server\n");
		server_destroy();
		exit(0);
	}
}

static void	set_ctrl_c_action(void)
{
	struct sigaction	action;

	action.sa_handler = on_ctrl_c;
	sigemptyset(&action.sa_mask);
	sigaddset(&action.sa_mask, SIGINT);
	sigaction(SIGINT, &action, 0);
}

void	server_config(void)
{

	ft_bzero(&g_server, sizeof(t_server));
	init_msg_arrays();
	set_main_action();
	set_ctrl_c_action();
}
