# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/28 21:33:30 by aammisse          #+#    #+#              #
#    Updated: 2025/07/10 11:01:03 by aammisse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

C++ = c++

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp Harl.cpp

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