#!/usr/bin/make -f
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
INC = -I includes/
SRC = \
	memalloc\
	memcpy\
	memdel\
	memset\
	stpcpy\
	strlen\
	strsub
OBJ = $(patsubst %, ft_%.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $@ $(OBJ)
	@echo "$(NAME) compiled."

%.o: %.c
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	@rm -rf $(OBJ)
	@echo "$(NAME) object files removed."

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) removed."

re: fclean all
