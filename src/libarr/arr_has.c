#include"libarr.h"

int	arr_has(void *self, void *item)
{
	int	i;
	
	i = 0;
	while (i < arr_length(self))
	{
		if (arr_read_at(self, i))
			return (i);
	}
	return (-1);
}
