/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   server_start.c                                          4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/02 03:22:45 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/08 14:25:28 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libserver.h"
#include"libftprintf.h"
#include<unistd.h>

void	server_start(int i)
{
	if (i)
		ft_printf("Minitalk server started wid PID: %i.\n", getpid());
	while (1)
		pause();
}
