#include"libarr.h"
#include"libftprintf.h"

bool	arr_push(void *self, void *value)
{
	if (arr_length(self) == arr_maxsize(self))
	{
		if (!arr_increase_max_size(self))
			return (false);
	}
	arr_data(self)[arr_length(self)] = value;
	arr_set_length(self, arr_length(self) + 1);
	return (true);
}
