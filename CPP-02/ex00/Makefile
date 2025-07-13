# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/29 10:19:46 by aammisse          #+#    #+#              #
#    Updated: 2025/07/10 20:07:22 by aammisse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

C++ = c++

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp Fixed.cpp

OBJS = ${SRCS:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${C++} ${FLAGS} ${OBJS} -o $@

%.o: %.cpp
	${C++} ${FLAGS} -c $< -o $@

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all