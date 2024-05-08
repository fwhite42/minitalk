#include<stdlib.h>
#include"libserver.h"

extern t_server	g_server;

void	server_destroy(void)
{
	int	pid;

	pid = 0;
	while (pid < MAX_CLIENTS)
		free(g_server.msg[pid++]);
}
