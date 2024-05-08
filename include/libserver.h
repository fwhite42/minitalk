/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libserver.h                                             4 2              */
/*                                                    +:+ +:+         +:+     */
/*   By: fwhite42 <FUCK THE NORM>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 07:23:27 by fwhite42          #+#    #+#             */
/*   Updated: 2024/05/08 14:17:21 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSERVER_H
# define LIBSERVER_H

# include<signal.h>
# include<libclient.h>

# define MAX_CLIENTS				4194304
# define STD_MSG_CAPACITY			256
# define SERVER_CONFIRMATION_MSG	"Oh s**t is 4:20 again!\n"

typedef struct s_server	t_server;

struct s_server
{	
	t_client	*client;
	char		*msg[MAX_CLIENTS];
	int			msg_len[MAX_CLIENTS];
	int			msg_capacity[MAX_CLIENTS];
	int			msg_cursor[MAX_CLIENTS];
	int			bit_counter;
};

void		server_config(void);
void		server_verify_pid(pid_t pid);
void		server_print_message(pid_t pid);
void		server_clean_message(pid_t pid);
void		server_update(pid_t pid);
void		server_readbit(pid_t pid, int signal);
void		server_handle(int signo, siginfo_t *info, void *ctx);
void		server_start(int i);
void		server_destroy(void);

#endif
