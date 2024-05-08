#include"libarr.h"
#include"liberror.h"

void	*arr_zip_int(void *self, void *target, int (*zip)())
{
	void	*zipped;
	int	i;
	int	x;
	int	y;

	if (arr_length(self) != arr_length(target))
		error_fatal("Cannot Zip Arrays of different length", 0);
	zipped = arr_create_default();
	i = 0;
	while (i < arr_length(zipped))
	{
		x = arr_read_int_at(self, i);
		y = arr_read_int_at(target, i);
		arr_push_int(zipped, zip(x, y));
		i++;
	}
	return (zipped);
}
