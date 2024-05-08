#include"libarr.h"

void	arr_bind_data(void *self, void **data)
{
	((t_arr *)self)->data = data;
}
