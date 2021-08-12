# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcadmin <mcadmin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/11 13:36:33 by sel-fadi          #+#    #+#              #
#    Updated: 2021/08/12 18:13:10 by mcadmin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=animal

SRC = Animal.cpp Cat.cpp Dog.cpp main.cpp

all: $(NAME)

$(NAME) : $(SRC)
	clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME)
clean : 
	@rm -rf $(NAME)
fclean: clean

re : fclean all