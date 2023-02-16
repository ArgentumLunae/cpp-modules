# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mteerlin <mteerlin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/01/20 13:49:24 by mteerlin      #+#    #+#                  #
#    Updated: 2023/02/02 16:31:36 by argentumlun   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ex00
OBJ_DIR = obj
VPATH := $(subst $(" "),:,$(shell find src -type d))
SRC_FILES = main.cpp Bureaucrat.cpp
OBJ_FILES = $(addprefix $(OBJ_DIR)/, $(notdir $(patsubst %.cpp, %.o, $(SRC_FILES))))
HDR_FILES := $(addprefix -I,$(shell find hdr -type d -print))
C_FLAGS = -Wall -Wextra -Werror
STD_FLAGS = -std=c++98
SAN_FLAGS = -g -fsanitize=thread
CC = g++ $(C_FLAGS) #$(STD_FLAGS)$(SAN_FLAGS)

all: obj_dir $(NAME)

$(NAME):	$(OBJ_FILES)
			@echo "Compiling minishell."
			$(CC) $(OBJ_FILES) -o $(NAME)
			@echo "Compilation finished."

$(OBJ_DIR)/%.o:	%.cpp $(HDR)
			@echo "creating file: "
			$(CC) $(HDR_FILES) -c $< -o $@

obj_dir:
			clear
			if [ -d "./$(OBJ_DIR)" ]; then \
			echo "obj directory exists"; \
			else \
			mkdir -p $(OBJ_DIR); \
			fi

test:
			@echo $(SRC_FILES)
			@echo $(OBJ_FILES)
			@echo $(HDR_FILES)

clean:
			@echo Removing object files
			rm -rf $(OBJ_DIR)

fclean:
			@$(MAKE) --no-print-directory clean
			@echo Removing excecutables
			@rm -f $(NAME)
re:
			@$(MAKE) --no-print-directory fclean
			@$(MAKE) --no-print-directory all

.PHONY:		all, obj_dir, test, clean, fclean, re;
