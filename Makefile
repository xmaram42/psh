CC := cc
CCFLAGS := -Wall -Werror -Wextra -g3
NAME := push_swap

# Source files
SRCS := main.c hnd_input.c info.c spl.c free_info.c check_sm.c \
stack_utils.c operation.c ooperation.c easy_sort.c sort_indx.c \
baby_quick_sort.c check_sort.c quick_sort.c
OBJS := $(SRCS:.c=.o)

# Optionally, include libft
LIBFT_DIR := ./libft
LIBFT := $(LIBFT_DIR)/libft.a
LIBFT_INC := -I$(LIBFT_DIR)

HEADER := push_swap.h

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CCFLAGS) -o $(NAME) $(OBJS) $(LIBFT)

%.o: %.c $(HEADER)
	$(CC) $(CCFLAGS) $(LIBFT_INC) -c $< -o $@

# Build libft
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
