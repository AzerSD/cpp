
NAME = a.out
SRC =  main.cpp
SRCDIR = src/
INCDIR = incl/
OBJDIR = bin/
CC = c++ -I$(INCDIR)
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g
OBJ = $(addprefix $(OBJDIR), $(SRC:.cpp=.o))
RM = rm -f

$(OBJDIR)%.o:	$(SRCDIR)%.cpp
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJDIR) $(OBJ)
		$(CC) $(OBJ) -o $(NAME)
 
all:		$(NAME)

$(OBJDIR):
		@mkdir -p $(OBJDIR)

clean:	
		$(RM) -rf $(OBJDIR)

fclean:			clean
		$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re