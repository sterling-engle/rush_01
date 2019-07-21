# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sengle <sengle@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/11 08:35:44 by sengle            #+#    #+#              #
#    Updated: 2019/07/21 02:17:02 by sengle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-1
FILES = main.c make_sudoku_board.c solve_sudoku.c print_sudoku.c ft_putchar.c
OBJECTS = main.o make_sudoku_board.o solve_sudoku.o print_sudoku.o ft_putchar.o

all: $(NAME)

$(NAME): $(FILES)
	gcc -Wall -Wextra -Werror -o $(NAME) $(FILES)

clean:
	/bin/rm -f $(OBJECTS)

fclean:	clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
