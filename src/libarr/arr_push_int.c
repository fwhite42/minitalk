#include"libarr.h"
#include"libftprintf.h"

bool	arr_push_int(void *self, int value)
{
	if (arr_length(self) == arr_maxsize(self))
	{
		if (!arr_increase_max_size(self))
			return (false);
	}
	arr_data(self)[arr_length(self)] = (void *) ((intptr_t) value);
	arr_set_length(self, arr_length(self) + 1);
	return (true);
}
