PROGRAMS	:= server client

# Util to reverse a list
define reverse
$(if $(1),$(call reverse,$(wordlist 2,$(words $(1)),$(1)))) $(firstword $(1))
endef

# Install dir
prefix		?= $(CURDIR)
includedir	?= $(prefix)/include
libdir		?= $(prefix)/lib
bindir		?= $(prefix)/bin
srcdir		?= $(prefix)/src
INSTALL_DATA	:= install -m 644
INSTALLDIRS	:= $(includedir) $(libdir) $(bindir)
MAKEABLE_DIRS	:= $(INSTALLDIRS)
MKDIR_P		:= mkdir -p

$(MAKEABLE_DIRS):%:
	$(MKDIR_P) $@
# Targets
NAME		:= minitalk

.DEFAULT_GOAL	:= $(NAME)

.PHONY: $(NAME)
$(NAME): all

.PHONY: all
all:		$(PROGRAMS)

# Programs

# Dependencies
define RARIES
	ft			\
	ftprintf	\
	error		\
	client		\
	server
endef
LIBRARIES 	:= $(RARIES:%=lib%)
LIBRARY_FILES	:= $(LIBRARIES:%=$(libdir)/%.a)
HEADERS		:= $(LIBRARIES:%=$(includedir)/%.h)
DEPENDENCIES	:= $(call reverse, $(LIBRARY_FILES))


.SECONDEXPANSION:
# Headers
$(HEADERS):$(includedir)/%.h	: $(srcdir)/$$*/$$*.h $(includedir)
	$(INSTALL_DATA) $(srcdir)/$*/$*.h $(includedir)/

.PHONY: headers
headers: $(HEADERS)

# Archives
$(LIBRARY_FILES):$(libdir)/%.a: $(srcdir)/%/Makefile $(libdir) $(HEADERS)
	$(MAKE) -C $(dir $<) includedir=$(includedir)
	$(INSTALL_DATA) $(srcdir)/$*/$*.a $(libdir)/

.PHONY: libraries
libraries: $(LIBRARY_FILES)

CC		?= gcc
CFLAGS		?= -Wall -Werror -Wextra
CPPFLAGS	?= -I$(includedir)
vpath %.a $(libdir)


$(PROGRAMS):%:	%.c $(DEPENDENCIES)

# Cleaners
.PHONY: clean
clean:
	@for lib in $(LIBRARIES:%=$(srcdir)/%); do $(MAKE) -C $$lib clean; done

.PHONY: fclean
fclean: clean
	@for lib in $(LIBRARIES:%=$(srcdir)/%); do $(MAKE) -C $$lib fclean; done
	$(RM) -r $(includedir) $(libdir) $(bindir)
	$(RM) $(PROGRAMS)

.PHONY: re
re:		fclean all
