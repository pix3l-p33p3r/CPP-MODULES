# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 16:17:26 by elel-yak          #+#    #+#              #
#    Updated: 2023/10/25 23:57:27 by elel-yak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = My_Awesome_PhoneBook
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Contact.cpp PhoneBook.cpp My_Awesome_PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
