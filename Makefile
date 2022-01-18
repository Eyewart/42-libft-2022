# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Hassan <hrifi-la@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/17 18:02:46 by hrifi-la          #+#    #+#              #
#    Updated: 2022/01/18 01:39:23 by Hassan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC1 = ft_isprint.c \
ft_memset.c \
ft_strtrim.c \
ft_strjoin.c \
ft_atoi.c \
ft_itoa.c \
ft_putchar_fd.c \
ft_strlcat.c \
ft_substr.c \
ft_bzero.c \
ft_putendl_fd.c \
ft_strlcpy.c \
ft_tolower.c \
ft_calloc.c \
ft_memcpy.c \
ft_putnbr_fd.c \
ft_strlen.c \
ft_toupper.c \
ft_isalnum.c \
ft_memchr.c \
ft_putstr_fd.c \
ft_isalpha.c \
ft_memcmp.c \
ft_split.c \
ft_strncmp.c \
ft_isascii.c \
ft_memcpy.c \
ft_strchr.c \
ft_strnstr.c \
ft_isdigit.c \
ft_memmove.c \
ft_strdup.c \
ft_strrchr.c \

SRC2 = ft_lstmap.c \
ft_lstnew.c \
ft_lstadd_back.c \
ft_lstsize.c \
ft_lstadd_front.c \
ft_lstclear.c \
ft_lstdelone.c \
ft_lstiter.c \
ft_lstlast.c \

OBJ1 = ${SRC1:.c=.o}
OBJ2 = ${SRC2:.c=.o}
NAME = libft.a
LINK = ar rc
$(NAME):	$(OBJ1)
	$(LINK)	$(NAME)	$(OBJ1)
all:	$(NAME)
bonus:	all	$(OBJ2)
	$(LINK)	$(NAME)	$(OBJ2)
clean:
	rm	-f	$(OBJ1)	$(OBJ2)
fclean:	clean
	rm	-f	$(NAME)
re:	fclean all
.PHONY: all clean fclean re