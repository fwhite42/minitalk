# Fields
GETTERS				:=	\
	data:void**			\
	length:int			\
	maxsize:int			\
	stepsize:int

SETTERS				:=	\
	bind_data:void**	\
	set_length:int		\
	set_maxsize:int		\
	set_stepsize:int

# Methods
CONSTRUCTORS		:=	\
	create_null			\
	create				\
	create_default		\
	copy

ITERATORS			:=	\
	foreach				\
	zip					\
	zip_int				\
	morph

ACCESSORS			:=	\
	write_at			\
	read_at				\
	read_int_at

MEMORY_MANAGMENT	:=	\
	increase_max_size	\
	skim

PUSHSWAP			:=	\
	swap				\
	rev_rotate			\
	rotate

INTEGERS			:=	\
	sort				\
	int_max

PRINTERS			:=	\
	print				\
	printf				

CLEANERS			:=	\
	destroy

STRINGS				:=	\
	strchr				\
	reverse				\
	copy_data

STDOP				:=	\
	push				\
	push_int			\
	pop

METHODS				:=	\
	$(CONSTRUCTORS)		\
	$(ITERATORS)		\
	$(ACCESSORS)		\
	$(MEMORY_MANAGMENT)	\
	$(PUSHSWAP)			\
	$(INTEGERS)			\
	$(PRINTERS)			\
	$(CLEANERS)			\
	$(STDOP)			\
	$(STRINGS)

include ../Makefile
