#include"libarr.h"
#include"libftprintf.h"

static void	update(void *max, void *data)
{
	int	nbr;
	
	nbr = (int) ((intptr_t) data);
	if (nbr > *((int *)max))
		*((int *)max) = nbr;
		
}

int	arr_int_max(void *self)
{
	int	max;

	max = 0;
	arr_foreach(self, update, &max);
	return (max);
}
