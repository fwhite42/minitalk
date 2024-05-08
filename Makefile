include			mk/utils.mk
include			mk/c.mk

NAME			:= minitalk
PROGRAMS		:= server client
.DEFAULT_GOAL	:= $(NAME)

.PHONY			: $(NAME) all clean fclean re

RARIES			:= ft ftprintf error client server
include			mk/install.mk

$(NAME)			: all
all				: $(PROGRAMS)
$(PROGRAMS)		:%:%.c $(call reverse, $(LIBRARY_FILES))
re				:fclean all
clean			:
	@for lib in $(LIBRARIES:%=$(srcdir)/%); do $(MAKE) -C $$lib clean; done
fclean			: clean
	@for lib in $(LIBRARIES:%=$(srcdir)/%); do $(MAKE) -C $$lib fclean; done
	$(RM) -r $(includedir) $(libdir) $(bindir)
	$(RM) $(PROGRAMS)
