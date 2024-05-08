#include"libarr.h"

void	arr_set_maxsize(void *self, int maxsize)
{
	((t_arr *)self)->maxsize = maxsize;
}
