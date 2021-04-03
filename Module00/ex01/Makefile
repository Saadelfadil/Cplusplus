# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/01 09:06:50 by sel-fadi          #+#    #+#              #
#    Updated: 2021/04/03 17:10:27 by sel-fadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=main

SRC = main.cpp contact.cpp

all: $(NAME)

$(NAME) : $(SRC)
	clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME)
clean : 
	@rm -rf $(NAME)
fclean: clean

re : fclean all