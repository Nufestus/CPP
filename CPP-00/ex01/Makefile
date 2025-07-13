# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/24 09:15:58 by aammisse          #+#    #+#              #
#    Updated: 2025/07/08 17:15:18 by aammisse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook

C++ = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Contact.cpp main.cpp PhoneBook.cpp

OBJS = ${SRCS:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${C++} ${FLAGS} ${OBJS} -o $@

%.o: %.cpp Contact.hpp PhoneBook.hpp
	${C++} ${FLAGS} -c $< -o $@

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all