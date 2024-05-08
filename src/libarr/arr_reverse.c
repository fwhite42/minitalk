#include"libarr.h"

void	arr_reverse(void *self)
{
	int	i;
	void	*first;
	void	*last;

	i = 0;
	while (i < arr_length(self) / 2)
	{
		first = arr_read_at(self, i);
		last = arr_read_at(self, - i - 1);	
		arr_write_at(self, i, last);
		arr_write_at(self, - i - 1, first);
		i++;
	}
}
