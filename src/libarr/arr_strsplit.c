#include"libft.h"

void	*arr_strsplit(char *str, char separator)
{
	char	**split;

	self = arr_create_default();
	split = ft_split(str, separator);
	while (split)
		arr_push(self, split++);
	return (self);
}
