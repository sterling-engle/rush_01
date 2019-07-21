# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sengle <sengle@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/11 08:35:44 by sengle            #+#    #+#              #
#    Updated: 2019/07/21 09:36:21 by sengle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-1
FILES = main.c make_sudoku_board.c solve_sudoku.c print_sudoku.c \
		ft_putstr.c ft_putchar.c
OBJECTS = main.o make_sudoku_board.o solve_sudoku.o print_sudoku.o \
		ft_putstr.o ft_putchar.o

test:	all
		gdb $(NAME) "9...7...." "2...9..53" ".6..124.." "84...1.9." "5.....8.." \
		".31..4..." "..37..68." ".9..5.741" "47......."

all: $(NAME)

$(NAME): $(FILES)
	gcc -g -Wall -Wextra -Werror -o $(NAME) $(FILES)

clean:
	/bin/rm -f $(OBJECTS)

fclean:	clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
