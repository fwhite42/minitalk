/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   server_handle.c                                         4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/02 03:22:24 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/02 03:22:26 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libserver.h"
#include"stddef.h"
#include"libftprintf.h"

void	server_handle(int signo, siginfo_t *info, void *ctx)
{
	if (ctx == NULL)
		return ;
	if (signo != SIGUSR1 && signo != SIGUSR2)
		return ;
	server_verify_pid(info->si_pid);
	server_readbit(info->si_pid, signo);
}
