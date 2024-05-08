#include"libarr.h"

void	arr_swap(void *arr)
{
	void	*tmp;
	
	if (arr_length(arr) < 2)
		return ;
	tmp = arr_read_at(arr, -1);
	arr_write_at(arr, -1, arr_read_at(arr, -2));
	arr_write_at(arr, -2, tmp);
}
