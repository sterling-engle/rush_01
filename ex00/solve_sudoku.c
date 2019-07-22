/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengle <sengle@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 09:11:38 by sengle            #+#    #+#             */
/*   Updated: 2019/07/21 21:36:19 by sterlinge        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "sudoku.h"

/*
**	is_valid_sudoku called with a 2D int array representing initial board
**
**		1. allocate b, one Sudoku row
**		2. main while loop checks row, column, and 3x3 grids
**
**	returns 1 if the board is valid and 0 if it is not
*/

/*
**	valid_sudoku_space called with two-dimensional int array containing current board
**	row and col to try to plqace try_val value in,
**
**	returns either TRUE (valid space) or FALSE (invalid)
*/

static int	valid_sudoku_space(int **board, int row, int col, int try_val)
{
	int	offset;
	int	col_offset;

	offset = 0;
	while (offset <= 8)
	{
		if ((board[offset][col] == try_val) || (board[row][offset] == try_val))
			return (FALSE);
		offset++;
	}
	offset = 0;
	while (offset <= 2)
	{
		col_offset = 0;
		while (col_offset <= 2)
		{
			if (board[row - (row % 3) + offset][col - (col % 3) + col_offset] == try_val)
				return (FALSE);
			col_offset++;
		}
		offset++;
	}
	return (TRUE);
}

/*
**	solve_sudoku is a recursive function called with a two-dimensional int array
**	containing the current board along with the number of validated_spaces
**
**		Example initial int **board:
**
**		{ 9, 0, 0, 0, 7, 0, 0, 0, 0 },
**		{ 2, 0, 0, 0, 9, 0, 0, 5, 3 },
**		{ 0, 6, 0, 0, 1, 2, 4, 0, 0 },
**		{ 8, 4, 0, 0, 0, 1, 0, 9, 0 },
**		{ 5, 0, 0, 0, 0, 0, 8, 0, 0 },
**		{ 0, 3, 1, 0, 0, 4, 0, 0, 0 },
**		{ 0, 0, 3, 7, 0, 0, 6, 8, 0 },
**		{ 0, 9, 0, 0, 5, 0, 7, 4, 1 },
**		{ 4, 7, 0, 0, 0, 0, 0, 0, 0 }
**
**		It returns SUCCESS (0) if a solution is found, else FAIL (1)
**
**
**		A copy of the board is used to try solutions?
**
**		static helper functions also contained in this file will be used, such
**		as: most_populated_row(int **board), most_populated_col(int **board),
**
*/

int			solve_sudoku(int **board, int validated_spaces)
{
	int	try_value;
	int	row;
	int	col;

	if (validated_spaces == 81)
		return (SUCCESS);
	row = validated_spaces / 9;
	col = validated_spaces % 9;
	if (board[row][col] != 0)
		return (solve_sudoku(board, validated_spaces + 1));
	try_value = 1;
	while (try_value <= 9)
	{
		if (valid_sudoku_space(board, row, col, try_value))
		{
			board[row][col] = try_value;
			if (solve_sudoku(board, validated_spaces + 1))
				return (SUCCESS);
			else
				board[row][col] = 0;
		}
		try_value++;
	}
	return (FAIL);
}

/*
**	Implementation Note:
**
**	The algorithm could be optimized by always trying to solve the row or column
**	that has the least empty zeroes first. In the project example the algo could
**	first try to solve column 9,2,0,8,5,0,0,0,4 and/or 0,0,6,4,0,3,0,9,7
**	(4 zeroes) against row 0,9,0,0,5,0,7,4,1 which also has just 4 zeroes.
*/
