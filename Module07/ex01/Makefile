# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/03 11:16:32 by sel-fadi          #+#    #+#              #
#    Updated: 2021/09/29 15:26:03 by sel-fadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=iter

SRC = main.cpp

all: $(NAME)

$(NAME) : $(SRC)
	clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME)
clean : 
	@rm -rf $(NAME)
fclean: clean

re : fclean all