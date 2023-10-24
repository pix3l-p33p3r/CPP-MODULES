# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 16:17:26 by elel-yak          #+#    #+#              #
#    Updated: 2023/10/18 16:23:02 by elel-yak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = My_Awesome_PhoneBook
CC = c++
CFLAGS = -Wall -Wextra -Werror
SRC = Contact.cpp PhoneBook.cpp My_Awesome_PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
