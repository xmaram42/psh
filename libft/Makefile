# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maabdulr <maabdulr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/08 20:27:07 by maabdulr          #+#    #+#              #
#    Updated: 2025/01/11 17:30:08 by maabdulr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC:= cc
CCFLAGS:= -Wall -Werror -Wextra
FILES:= ft_isalnum.c ft_isdigit.c \
  ft_isalpha.c ft_isascii.c \
  ft_isprint.c  ft_strlen.c \
  ft_memset.c ft_bzero.c \
  ft_memcpy.c ft_memmove.c \
  ft_strlcpy.c ft_strlcat.c \
  ft_toupper.c ft_tolower.c \
  ft_strchr.c ft_strrchr.c \
  ft_strncmp.c ft_memchr.c \
  ft_memcmp.c ft_strnstr.c \
  ft_atoi.c ft_calloc.c \
  ft_strdup.c ft_substr.c \
  ft_strjoin.c ft_strtrim.c \
  ft_split.c ft_putnbr_fd.c \
  ft_strmapi.c ft_striteri.c \
  ft_putchar_fd.c ft_putstr_fd.c \
  ft_putendl_fd.c  \

BONUS:= ft_lstnew.c ft_lstadd_front.c \
  ft_lstsize.c ft_lstlast.c \
  ft_lstadd_back.c ft_lstiter.c \

HEADER:= libft.h
NAME:= libft.a

OFILES:= $(FILES:.c=.o)
OBONUS:= $(BONUS:.c=.o)

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CCFLAGS) -c $< -o $@

$(NAME): $(OFILES)
	ar -crs $(NAME) $(OFILES) 

bonus: $(OBONUS) 
	ar -crs $(NAME) $(OBONUS)
 
clean:
	rm -f $(OFILES) $(OBONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re