prefix			?= $(CURDIR)
includedir		?= $(prefix)/include
libdir			?= $(prefix)/lib
bindir			?= $(prefix)/bin
srcdir			?= $(prefix)/src

INSTALL_DATA	:= install -m 644
INSTALLDIRS		:= $(includedir) $(libdir) $(bindir)
MAKEABLE_DIRS	:= $(INSTALLDIRS)
MKDIR_P			:= mkdir -p
$(MAKEABLE_DIRS):%:
	$(MKDIR_P) $@

LIBRARIES		:= $(RARIES:%=lib%)
LIBRARY_FILES	:= $(LIBRARIES:%=$(libdir)/%.a)
HEADERS			:= $(LIBRARIES:%=$(includedir)/%.h)

ifdef reverse
endif

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
