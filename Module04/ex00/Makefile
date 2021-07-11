# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/11 13:36:33 by sel-fadi          #+#    #+#              #
#    Updated: 2021/07/11 16:20:17 by sel-fadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=sorcerer

SRC = Sorcerer.cpp Victim.cpp Peon.cpp main.cpp

all: $(NAME)

$(NAME) : $(SRC)
	clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME)
clean : 
	@rm -rf $(NAME)
fclean: clean

re : fclean all