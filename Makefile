MAKEFILES = $(shell find . -maxdepth 3 -type f -name Makefile)
SUBDIRS   = $(filter-out ./, $(dir $(MAKEFILES)))

all:
	for dir in $(SUBDIRS); do \
		make -C $$dir all; \
	done

re:
	for dir in $(SUBDIRS); do \
		make -C $$dir re; \
	done

fclean:
	for dir in $(SUBDIRS); do \
		make -C $$dir fclean; \
	done