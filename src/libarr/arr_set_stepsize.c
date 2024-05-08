#include"libarr.h"

void	arr_set_stepsize(void *self, int stepsize)
{
	((t_arr *)self)->stepsize = stepsize;
}
