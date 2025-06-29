# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 12:01:18 by cmansey           #+#    #+#              #
#    Updated: 2025/06/23 17:28:41 by cmansey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	   ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
	   ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
	   ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c \
	   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strjoin.c \
	   ft_striteri.c ft_strmapi.c ft_itoa.c ft_strtrim.c ft_split.c

# Bonus functions
BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			 ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			 ft_lstmap.c

all: $(NAME)

OBJS = $(SRCS:.c=.o)

CC = gcc
RM = rm -f
AR = ar -rcs

CFLAGS = -Wall -Wextra -Werror

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_SRCS:.c=.o)
	$(CC) $(CFLAGS) -c $(BONUS_SRCS)
	$(AR) $(NAME) $(OBJS) $(BONUS_SRCS:.c=.o)

clean:
	$(RM) $(OBJS) $(BONUS_SRCS:.c=.o)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
