#include"libarr.h"
#include"libft.h"
#include"libftprintf.h"
#include<stddef.h>

void	arr_strchr(void *self, char *string, char search)
{
	char	*cursor;
	size_t	offset;

	cursor = string;
	while (cursor != NULL)
	{
		offset = cursor - string;
		cursor = ft_strchr(string + offset, search);
		if (cursor != NULL)
		{
			arr_push(self, malloc(sizeof(size_t)));
			arr_write_at(self, -1, (void *) (cursor - string));
			cursor++;
		}
	}
}
