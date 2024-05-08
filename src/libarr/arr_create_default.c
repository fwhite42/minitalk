#include"libarr.h"

void	*arr_create_default(void)
{
	void	*ptr;

	ptr = arr_create(ARR_DEFAULT_STEPSIZE, ARR_DEFAULT_MAXSIZE);
	return (ptr);
}
