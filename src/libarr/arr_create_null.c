#include"libarr.h"
#include"libft.h"

void	*arr_create_null(void)
{
	void	*ptr;

	ptr = ft_calloc(1, sizeof(t_arr));
	return (ptr);
}
