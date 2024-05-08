#ifndef LIBARR_H
# define LIBARR_H

# define ARR_SAFE_MAX_LENGTH	2 >> 16
# define ARR_DEFAULT_STEPSIZE	1
# define ARR_DEFAULT_MAXSIZE	0




# include<stdbool.h>

//Struct

typedef struct s_arr
{
	void	*data;
	int	length;
	int	maxsize;
	int	stepsize;
}	t_arr;

//Construction
void	*arr_create_null(void);
void	*arr_copy(void *self);
void	*arr_create(int step_size, int max_size);
void	*arr_create_default(void);

//Destructors
void	arr_destroy(void *self, void (*fn)(), void *caller);

//Config
bool	arr_increase_max_size(void *self);
bool	arr_skim(void *self);

//Print
void	arr_print(void *self);
void	arr_printf(void *self, char *flags);

//Read Operations
void	*arr_read_at(void *self, int index);
void	*arr_pop(void *self);

void	*arr_bottom(void *self, int index);
void	*arr_top(void *self, int index);
int	arr_has(void *self, void *item);

// Write Operations
bool	arr_write_at(void *self, int index, void *item);
bool	arr_push(void *self, void *item);

// Math
bool	arr_push_int(void *self, int data);
//bool	arr_write_int(void *self, int data);
//int	arr_pop_int(void *self);
int	arr_read_int_at(void *self, int index);
void	*arr_zip(void *self, void *target, void *(*zip)());
void	*arr_zip_int(void *self, void *target, int (*zip)());
//int	arr_sum(void *self);
//int	arr_avg(void *self)
//int	arr_min_index(void *self);
//int	arr_max_index(void *self);

//Getters
int	arr_length(void *self);
int	arr_maxsize(void *self);
int	arr_stepsize(void *self);
void	**arr_data(void *self);

// Setters
void	arr_bind_data(void *self, void **data);
void	arr_set_stepsize(void *self, int stepsize);
void	arr_set_length(void *self, int lengt);
void	arr_set_maxsize(void *self, int maxsize);

//Functional Programming
void	arr_foreach(void *self, void (*fn)(), void *caller);
void	arr_morph(void *self, void *(*fn)(), void *caller);
void	arr_reduce(void *self, void *(*fn)(), void *memory);

// String Operations
void	arr_strchr(void *self, char *string, char search);

// Push Swap Operations
void	arr_swap(void *self);
void	arr_rotate(void *self);
void	arr_rev_rotate(void *self);
int	arr_int_max(void *self);
int	arr_int_min(void *self);
// Permutations
void	arr_reverse(void *self);
void	arr_sort(void *self);
#include<stdint.h>
//Misc
void	**arr_copy_data(void *self);
#endif
