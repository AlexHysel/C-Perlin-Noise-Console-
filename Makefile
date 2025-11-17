NAME = perlin_noise.a
LIBC = ar -rcs
CC = cc
RM = rm -f

FILES = hpn.c hpn_math.c hpn_display.c

OBJS = $(FILES:.c=.o)

%.o: %.c
	$(CC) -c $< -o $@

all: ${NAME}

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(OBJS_B) $(OBJS_GNL)

fclean: clean
	$(RM) $(NAME)

.PHONY: fclean clean all
