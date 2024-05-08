#include"libarr.h"
#include"stddef.h"

void	*arr_pop(void *self)
{
	void	*data;
	
	data = arr_data(self)[arr_length(self) - 1];
	arr_data(self)[arr_length(self) - 1] = NULL;
	arr_set_length(self, arr_length(self) - 1);
	return (data);
}
