NAME		:= $(patsubst lib%,%,$(notdir $(CURDIR)))
ARCHIVE		:= lib$(NAME).a
SOURCE		:= $(METHODS:%=$(NAME)_%.c)
OBJECTS		:= $(SOURCE:%.c=%.o)

CC		:= gcc
CFLAGS		:= -Wall -Werror -Wextra
CPPFLAGS	:= -I$(includedir) -I$(CURDIR)	

AR		:= ar
ARFLAGS		:= -rcs

.DEFAULT_GOAL = all

$(ARCHIVE): $(ARCHIVE)($(OBJECTS))

.PHONY: all
all: $(ARCHIVE)

.PHONY: objects
objects: $(OBJECTS)

.PHONY: re
re: fclean all

.PHONY: $(NAME)
$(NAME): $(ARCHIVE)

.PHONY: clean
clean:
	$(RM) *.o

.PHONY: fclean
fclean: clean
	$(RM) *.a
