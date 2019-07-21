/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_sudoku_board.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengle <sengle@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 09:11:38 by sengle            #+#    #+#             */
/*   Updated: 2019/07/21 10:30:14 by sengle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "sudoku.h"

/*
**	make_sudoku_board(argc, argv) converts argv[1..9] to an int sudoku array.
**		It returns NULL if argc != 10 or there is invalid input.
**
**	local variables:
**
**	board	int ** pointer to a pointer (double pointer)
**			First, we allocate an array of pointers to each row.
**			Then, we allocate memory to hold each column for that board[row]
**
**	row		board[row] and its corresponding argv[row + 1] (argv[0] is program)
**	col		board[row][col]
*/

int	**make_sudoku_board(int argc, char **argv)
{
	int	**board;
	int	row;
	int	col;

	if (argc != 10)
		return (NULL);
	board = (int **)malloc(ROWS * sizeof(int *));
	row = 0;
	while (row < ROWS)
		board[row++] = (int *)malloc(COLS * sizeof(int));
	row = -1;
	while (++row < ROWS)
	{
		col = -1;
		while (++col < COLS)
		{
			if (argv[row + 1][col] == '.')
				board[row][col] = 0;
			else if ('1' <= argv[row + 1][col] && argv[row + 1][col] <= '9')
				board[row][col] = argv[row + 1][col] - '0';
			else
				return (NULL);
		}
	}
	return (board);
}
