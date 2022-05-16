# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ailopez- <ailopez-@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 16:48:38 by ailopez-          #+#    #+#              #
#    Updated: 2022/05/16 15:31:17 by aitorlope        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	= 	libft.a

loli	= 	${addprefix zdsr,$(NAME)}

SRCS		=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
				ft_strchr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strlen.c \
				ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strdup.c \
				ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_calloc.c ft_memchr.c \
				ft_memcmp.c ft_strnstr.c ft_atoi.c ft_substr.c ft_strjoin.c \
				ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c

#SRCS_BONUS	=	ft_bonus.c

OBJS		=	$(SRCS:%.c=%.o)
#OBJS_BONUS	=	$(SRCS_BONUS:%.c=%.o)

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

%.o: %.c
		${CC} ${CFLAGS} -I./ -c $< -o $@

all: ${NAME}

${NAME}:${OBJS} libft.h
		ar -crs ${NAME} ${OBJS}

#bonus:${NAME} ${OBJS_BONUS}
#		ar -crs ${NAME} ${OBJS_BONUS}
#		@touch $@

#Regla para borrar todos los objetos y directorios
clean:
		${RM} ${OBJS}

#Regla para borrar todo lo que ha sido creado or el makefile
fclean:	clean
		${RM} ${NAME}
#		${RM} bonus
#Regla  para rehacer todo
re:		fclean all

.PHONY: fclean, all, clean, re

