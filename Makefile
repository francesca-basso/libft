# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbasso <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/13 14:57:19 by fbasso            #+#    #+#              #
#    Updated: 2021/01/13 15:04:10 by fbasso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
		ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_strcpy.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_strmapi.c ft_split.c

SRCS_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

RM = /bin/rm -f 

CC = gcc

CFLAGS = -Wall -Wextra -Werror -c  

OBJS = ${SRCS:.c=.o}
OBJS_B = ${SRCS_B:.c=.o}

%.o: %.c
	${CC} ${CFLAGS} $<

all: ${NAME}

$(NAME): ${OBJS}
	ar -rc ${NAME} ${OBJS}
	ranlib ${NAME}

bonus: $(NAME) $(OBJS_B)
	ar -rc $(NAME) $(OBJS_B)

clean:
	${RM} ${OBJS} ${OBJS_B}

fclean: clean
	${RM} ${NAME} $(bonus)

re: fclean all

.PHONY: all bonus clean fclean re