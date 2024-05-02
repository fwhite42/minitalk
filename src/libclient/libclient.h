/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   libclient.h                                             4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/02 03:33:21 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/02 03:33:47 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBCLIENT_H
# define LIBCLIENT_H
# include<signal.h>

typedef struct s_client
{
	pid_t	pid;
	int		zero;
	int		one;
}	t_client;

void	client_config(t_client *self, int ac, char **av);
void	client_sendbit(t_client *self, int b);
void	client_sendchar(t_client *self, char c);
void	client_sendstr(t_client *self, char *s);
#endif
