# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azer <sioudazer8@gmail.com>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 20:15:56 by azer              #+#    #+#              #
#    Updated: 2022/12/23 20:15:57 by azer             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC =	megaphone.cpp	\

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

re: all clean fclean