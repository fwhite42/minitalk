#include"libarr.h"

void	arr_rotate(void *self)
{
	void	*item;

	item = arr_pop(self);
	arr_reverse(self);
	arr_push(self, item);
	arr_reverse(self);
}
