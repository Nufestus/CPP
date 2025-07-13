# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/28 20:31:18 by aammisse          #+#    #+#              #
#    Updated: 2025/07/10 11:02:06 by aammisse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Violence

C++ = c++

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp

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
	rm -rf *.replace

re: fclean all