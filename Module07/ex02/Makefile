# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/03 11:16:32 by sel-fadi          #+#    #+#              #
#    Updated: 2021/09/30 11:14:04 by sel-fadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=array

SRC = main.cpp
HDR = Array.hpp

all: $(NAME)

$(NAME) : $(SRC) $(HDR)
	clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME)
clean : 
	@rm -rf $(NAME)
fclean: clean

re : fclean all