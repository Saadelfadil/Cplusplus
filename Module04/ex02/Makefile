# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/11 13:36:33 by sel-fadi          #+#    #+#              #
#    Updated: 2021/07/13 16:40:49 by sel-fadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=sorcerer

SRC = AWeapon.cpp Character.cpp Enemy.cpp PlasmaRifle.cpp PowerFist.cpp RadScorpion.cpp SuperMutant.cpp main.cpp

all: $(NAME)

$(NAME) : $(SRC)
	clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME)
clean : 
	@rm -rf $(NAME)
fclean: clean

re : fclean all