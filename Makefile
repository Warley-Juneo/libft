# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/29 15:50:11 by wjuneo-f          #+#    #+#              #
#    Updated: 2021/08/03 19:10:06 by wjuneo-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES    = ${wildcard *.c}

OBJECTS    = ${SOURCES:.c=.o}

INCLUDE    = ${wildcard *.h}

NAME    = libft.a

CC        = clang
AR        = ar
RM        = rm -f

CFLAGS    = -g -Wall -Wextra -Werror
ARFLAGS    = rc

INDEX    = ranlib ${NAME}


# so:
# 	$(CC) -g -nostartfiles -fPIC $(CFLAGS) $(SOURCES)
# 	gcc -nostartfiles -shared -o libft.so $(OBJECTS)

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:    ${OBJECTS}
		${AR} ${ARFLAGS} ${NAME} ${OBJECTS}

clean:
		${RM} ${OBJECTS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
