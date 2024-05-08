#include"libarr.h"
//#include"libftprintf.h"

int	arr_read_int_at(void *self, int index)
{
	index %= arr_length(self);
	if (index < 0)
		index += arr_length(self);
	index %= arr_length(self);
//	ft_printf("Reading at index: %i\n", index);
	return ((int) ((intptr_t) arr_data(self)[index]));
}
