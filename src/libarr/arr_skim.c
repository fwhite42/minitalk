#include"libarr.h"
#include<stdlib.h>

bool	arr_skim(void *self)
{
	int	maxsize;
	void	**data;

	maxsize = 0;

	while (maxsize <  arr_length(self))
		maxsize += arr_stepsize(self);
	if (arr_maxsize(self) > maxsize)
	{
		data = arr_copy_data(self);
		free(arr_data(self));
		arr_bind_data(self, data);
		arr_set_maxsize(self, maxsize);
		return (true);
	}
	return (true);
}
