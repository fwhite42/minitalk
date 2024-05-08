#include"libarr.h"
#include"libftprintf.h"
#include"libft.h"
#include<stdbool.h>

bool	check_flag(char *string, char search)
{
	if (ft_strchr(string, search) == NULL)
		return (false);
	else
		return (true);
}

static void	print_integers(void *self)
{
	int	i;
	int	data;
	
	i = 0;
	ft_printf("<");
	if (arr_length(self) > 0)
	{
		while (i < arr_length(self) - 1)
		{
			data = arr_read_int_at(self, i);
			ft_printf("%i", data);
			ft_printf(" ");
			i++;
		}
		data = arr_read_int_at(self, i);
		ft_printf("%i", data);
	}
	ft_printf(">");
}

static void	print_pointers(void *self)
{
	int	i;
	void	*data;

	i = 0;
	ft_printf("<");
	if (arr_length(self) > 0)
	{
		while (i < arr_length(self) - 1)
		{
			data = arr_read_at(self, i);
			ft_printf("%p", data);
			ft_printf(" ");
			i++;
		}
		data = arr_read_at(self, i);
		ft_printf("%p", data);
	}
	ft_printf(">");
}

void	arr_printf(void *self, char *flags)
{
	if (check_flag(flags, 'I'))
		return arr_printf(self, "pami");
	if (check_flag(flags, 'p'))
		ft_printf("(%p)\t", self);
	if (check_flag(flags, 'a'))
		ft_printf("Array");
	if (check_flag(flags, 'm'))
	{
		ft_printf("[");
		ft_printf("%i:", arr_length(self));
		ft_printf("%i:", arr_maxsize(self));
		ft_printf("%i", arr_stepsize(self));
		ft_printf("]");
	}
	if (check_flag(flags, 'i'))
		print_integers(self);
	else if (check_flag(flags, 'd'))
		print_pointers(self);
	printf("\n");
}
