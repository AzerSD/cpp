# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 20:15:51 by azer              #+#    #+#              #
#    Updated: 2023/07/18 02:44:11 by asioud           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

SRC =	ClapTrap.cpp main.cpp ScavTrap.cpp

OBJS = $(SRC:.cpp=.o)

C_FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

%.o: %.cpp
	$(CC) $(C_FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(C_FLAGS) -o $@ $^
	clear

clean:
	@rm -f *.o
	@rm -f *.d

fclean: clean
	@rm -f $(NAME)

re: clean fclean all