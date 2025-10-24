# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/29 14:48:32 by aammisse          #+#    #+#              #
#    Updated: 2025/10/24 17:05:55 by aammisse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap

C++ = c++

FLAGS = #-Wall -Wextra -Werror

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJS = ${SRCS:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${C++} ${FLAGS} ${OBJS} -o $@

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	${C++} ${FLAGS} -c $< -o $@

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all