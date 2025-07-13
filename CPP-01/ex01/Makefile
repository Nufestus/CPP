# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/28 15:41:44 by aammisse          #+#    #+#              #
#    Updated: 2025/07/10 11:01:55 by aammisse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BrainzZHorde

C++ = c++

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp Zombie.cpp zombieHorde.cpp

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