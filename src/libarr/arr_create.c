#include"libft.h"
#include"liberror.h"
#include"libarr.h"
#include"libftprintf.h"

// Creates an arr with given stepsize and maxsize.
void	*arr_create(int stepsize, int maxsize)
{
	void	*self;

	self = ft_calloc(1, sizeof(t_arr));
	arr_set_stepsize(self, stepsize);
	while (arr_maxsize(self) != maxsize)
	{
		if (!arr_increase_max_size(self))
			error_fatal(NULL, 0);
	}
	return (self);
}
