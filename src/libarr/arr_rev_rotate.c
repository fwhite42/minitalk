#include"libarr.h"

void	arr_rev_rotate(void *self)
{
	void	*item;

	arr_reverse(self);
	item = arr_pop(self);
	arr_reverse(self);
	arr_push(self, item);
}
