#include"libarr.h"
//#include"libftprintf.h"

void	*arr_read_at(void *self, int index)
{
	index %= arr_length(self);
	if (index < 0)
		index += arr_length(self);
	index %= arr_length(self);
//	ft_printf("Reading at index: %i\n", index);
	return (arr_data(self)[index]);
}
