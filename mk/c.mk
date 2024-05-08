CC			?= gcc
CFLAGS		?= -Wall -Werror -Wextra
CPPFLAGS	?= -I$(includedir)
vpath %.a 	$(libdir)
