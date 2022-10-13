# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mikuiper <mikuiper@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/10 11:59:53 by mikuiper      #+#    #+#                  #
#    Updated: 2022/10/13 15:20:25 by mikuiper      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

# EXECUTABLE
NAME		=	phonebook

# CONFIGURATION
CC			=	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98

# COLOR CODES
RESET		=	\033[0m
GREEN		=	\033[32m
YELLOW		=	\033[33m
RED			=	\033[31m

# DIRECTORIES
SRC_DIR		=	srcs/
OBJ_DIR		=	objs/
INC_DIR		=	includes/

# FILES
SRC_FILES	=	main.cpp \
				contact.cpp \
				phonebook.cpp \
				utils.cpp
OBJ_FILES	=	$(SRC_FILES:.cpp=.o)
SRC			=	$(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ			=	$(addprefix $(OBJ_DIR), $(OBJ_FILES))

# RULES
all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(YELLOW)Compiling..[$(NAME)]$(RESET)"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Finished compiling..$(NAME)$(RESET)"

$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@echo "$(YELLOW)Compiling..[$@]$(RESET)"
	@$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ -c $<

clean:
	@if [ -d "$(OBJ_DIR)" ]; then \
	rm -rf $(OBJ_DIR); \
	echo "$(RED)Deleting all object files..$(RESET)"; else \
	echo "No object files to delete.."; \
	fi;

fclean: clean
	@if [ -f "$(NAME)" ]; then \
	rm -f $(NAME); \
	echo "$(RED)Deleting $(NAME)$(RESET)"; else \
	echo "No executable to delete."; \
	fi;

re: fclean all

.PHONY: all clean fclean re
