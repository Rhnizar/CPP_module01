# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 18:39:01 by rrhnizar          #+#    #+#              #
#    Updated: 2023/08/14 18:39:25 by rrhnizar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = zombie

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

CXX = c++

RFLAG = ${CXX} -Wall -Werror -Wextra -std=c++98

%.o : %.cpp
	${RFLAG} -c $< -o $@

all : ${Name}

${Name} : ${OBJ}
	${RFLAG} ${OBJ} -o ${Name}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${Name}

re : fclean all