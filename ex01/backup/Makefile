# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mikuiper <mikuiper@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/09/28 18:02:23 by mikuiper      #+#    #+#                  #
#    Updated: 2022/09/28 19:38:51 by mikuiper      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	= 	phonebook
SRC		= 	phonebook.cpp \
			add_contact.cpp \
			search_contact.cpp
OBJ		= 	$(SRC:.cpp=.o)
CC		= 	clang++
FLAGS	= 	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Compiling $(SRC)"
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "Done!"

%.o: %.cpp phonebook.hpp
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@echo "Running clean"
	@rm -rf $(OBJ)

fclean: clean
	@echo "Running fclean"
	@rm -rf $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean fclean re