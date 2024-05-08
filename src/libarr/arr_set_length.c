#include"libarr.h"

void	arr_set_length(void *self, int length)
{
	((t_arr *)self)->length = length;
}
