/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   server_verify_pid.c                                     4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/02 03:21:07 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/02 03:21:10 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include"libserver.h"
#include"liberror.h"

void	server_verify_pid(pid_t pid)
{
	if (pid < 0 && pid > MAX_CLIENTS)
		error_fatal("Recevied msg from invalid PID", 0);
}
