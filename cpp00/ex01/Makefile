# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 20:15:51 by azer              #+#    #+#              #
#    Updated: 2023/07/04 01:26:46 by asioud           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pb

SRC =	PhoneBook.cpp	\

OBJS = $(SRC:.cpp=.o)

C_FLAGS = -Wall -Wextra -Werror -lefence -std=c++98

CC = c++

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(C_FLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -f *.o
	@rm -f *.d

fclean: clean
	@rm -f $(NAME)

re: clean fclean all