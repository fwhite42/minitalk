#include"libarr.h"

bool	arr_write_at(void *self, int index, void *value)
{
	if (index >= 0 && index < arr_length(self))
		arr_data(self)[index] = value;
	else if (index < 0)
		arr_write_at(self, arr_length(self) + index, value);
	return (true);
}
