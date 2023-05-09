# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 20:15:51 by azer              #+#    #+#              #
#    Updated: 2023/05/09 09:58:18 by asioud           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

SRC =	main.cpp	\

OBJS = $(SRC:.cpp=.o)

C_FLAGS = -Wall -Wextra -Werror -std=c++98

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