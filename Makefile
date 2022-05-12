# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ailopez- <ailopez-@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 16:48:38 by ailopez-          #+#    #+#              #
#    Updated: 2022/05/12 09:49:52 by aitorlope        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	= 	libft.a

SRCS		=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
				ft_strchr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strlen.c \
				ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strdup.c \
				ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_calloc.c ft_memchr.c \
				ft_memcmp.c ft_strnstr.c

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc

CFLGS	=	-Wall -Wextra -Werror

RM		=	rm -f

all: ${NAME}

${NAME}:

		${CC} -c ${CFLAGS} ${SRCS} 
		ar -crs ${NAME} ${OBJS}

#Regla para borrar todos los objetos y directorios
clean:
		${RM} ${OBJS}

#Regla para borrar todo lo que ha sido creado or el makefile
fclean:	clean
		${RM} ${NAME}
#Regla  para rehacer todo
re:		fclean all

.PHONY: fclean all, all, clean, fclean, re

