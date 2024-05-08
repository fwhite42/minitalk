#include"libarr.h"
#include"libftprintf.h"

static void	update(void *min, void *data)
{
	int	nbr;
	
	nbr = (int) ((intptr_t) data);
	if (nbr < *((int *)min))
		*((int *)min) = nbr;
		
}

int	arr_int_min(void *self)
{
	int	min;

	min = 0;
	arr_foreach(self, update, &max);
	return (max);
}
