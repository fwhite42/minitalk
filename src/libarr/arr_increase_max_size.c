#include "libarr.h"
#include"libft.h"
#include"liberror.h"

bool	arr_increase_max_size(void *self)
{
	int	i;
	int	new_maxsize;
	void	**data;
	
	new_maxsize = arr_stepsize(self) + arr_maxsize(self);
	data = ft_calloc(sizeof(void *), new_maxsize);
	if (data == NULL)
		error_fatal("ft_calloc returned NULL", 0);
	i = 0;
	while (i < arr_length(self))
	{
		data[i] = arr_data(self)[i];
		i++;
	}
	free(arr_data(self));
	arr_bind_data(self, data);
	arr_set_maxsize(self, new_maxsize);
	return (true);
}
