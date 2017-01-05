NAME    = libfs
AUTHOR  = iwordes
VERSION = 1.0.0

CC      = gcc
CF      = -Wall -Wextra -Werror -I include

include functions.mk
FN     := $(FN__) $(FN_BOOL) $(FN_HELP) $(FN_INFO) $(FN_OPS)
FN     := $(addsuffix .o,$(addprefix build/,$(FN)))


.PHONY: all
all: lib/$(NAME).a

.PHONY: clean
clean:
	rm -rf build

.PHONY: fclean
fclean: clean
	rm -rf lib

.PHONY: re
re: fclean all

.PHONY: $(NAME)
$(NAME): lib/$(NAME).a


build/%.o: src/%.c
	@mkdir -p build
	$(CC) $(CF) -c -o $@ $<

lib/$(NAME).a: $(FN)
	@mkdir -p lib
	libtool -static -o lib/$(NAME).a $(FN)
