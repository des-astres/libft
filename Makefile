# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpierre- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/17 14:59:00 by lpierre-          #+#    #+#              #
#    Updated: 2024/05/28 13:22:23 by lpierre-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ./ft_bzero.c ./ft_isalnum.c ./ft_isalpha.c ./ft_isascii.c ./ft_isdigit.c ./ft_isprint.c ./ft_memcpy.c ./ft_memmove.c ./ft_memset.c ./ft_strlcat.c ./ft_strlcpy.c ./ft_strlen.c ./ft_toupper.c ./ft_tolower.c ./ft_strchr.c ./ft_strrchr.c ./ft_strncmp.c ./ft_memchr.c ./ft_memcmp.c ./ft_strnstr.c ./ft_atoi.c ./ft_strdup.c ./ft_calloc.c ./ft_putchar_fd.c ./ft_putstr_fd.c ./ft_putendl_fd.c ./ft_putnbr_fd.c ./ft_substr.c ./ft_strjoin.c ./ft_strtrim.c ./ft_split.c ./ft_itoa.c ./ft_strmapi.c ./ft_striteri.c

BONUS_SRCS = ./ft_lstnew_bonus.c ./ft_lstadd_front_bonus.c ./ft_lstsize_bonus.c ./ft_lstlast_bonus.c ./ft_lstadd_back_bonus.c ./ft_lstdelone_bonus.c ./ft_lstclear_bonus.c ./ft_lstiter_bonus.c ./ft_lstmap_bonus.c

HEADERS = ./

OBJECTS = $(SOURCES:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

ALL_OBJS = $(OBJECTS) $(BONUS_OBJS)

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar rcs

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -I $(HEADERS) $< -o $(<:.c=.o)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

clean: 
	$(RM) $(OBJECTS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(ALL_OBJS)
	$(AR) $(NAME) $(ALL_OBJS)

.PHONY: all clean fclean re
