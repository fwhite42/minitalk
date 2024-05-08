#include"libarr.h"

// Creates a skimmed ccopy of self.
void	*arr_copy(void *self)
{
	int	i;
	void	*copy;

	copy = arr_create_null();
	arr_set_stepsize(copy, arr_stepsize(self));
	i = 0;
	while (i < arr_length(self))
		arr_push(copy, arr_read_at(self, i++));
	return (copy);
}
