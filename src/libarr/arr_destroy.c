#include"libarr.h"
#include"stdlib.h"

void	arr_destroy(void *self, void (*fn)(), void *caller)
{
	if (fn != NULL)
		arr_foreach(self, fn, caller);
	free(arr_data(self));
	free(self);
}
