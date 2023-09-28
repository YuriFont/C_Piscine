# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/17 12:24:55 by yufonten          #+#    #+#              #
#    Updated: 2023/09/28 11:03:15 by yufonten         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	= -Wall -Wextra -Werror
SRCS	= srcs/ft_putchar.c/ft_swap.c/ft_putstr.c/ft_strlen.c/ft_strcmp.c
OBJS	= ${SRCS:.c=.o}
LIB	= libft.a
INCLUDE	= includes
MKLIB	= ar rc
INLIB	= ranlib
RM		= rm -f

.c.o:
	cc ${CFLAGS} -c $< -o ${OBJS} -I ${INCS}

${LIB}: ${OBJS}
	${MKLIB} ${LIB} ${OBJS}
	${INLIB} ${LIB}

all: ${LIB}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${LIB}

re: fclean all
