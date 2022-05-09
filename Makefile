# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ailopez- <ailopez-@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 16:48:38 by ailopez-          #+#    #+#              #
#    Updated: 2022/05/09 18:06:10 by ailopez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	= 	libft.a

SRCS		=	ft_isalpha.c

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc

CFLGS	=	-Wall -Wextra -Werror

RM		=	rm -f

all: ${NAME}

${NAME}:

		${CC} -c ${CFLAGS} ${SRCS} 
		ar crs ${NAME} ${OBJS}

#Regla para borrar todos los objetos y directorios
clean:
		${RM} ${OBJS}

#Regla para borrar todo lo que ha sido creado or el makefile
fclean:	clean
		${RM} ${NAME}
#Regla  para rehacer todo
re:		fclean all

.PHONY: all, clean, fclean, re

