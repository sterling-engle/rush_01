/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengle <sengle@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 09:11:38 by sengle            #+#    #+#             */
/*   Updated: 2019/07/21 14:23:01 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "sudoku.h"
#include <stdio.h>

/*
**	sudoku called with a two dimensional int array representing initial board
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
**
**		It returns SUCCESS (0) if a solution is found, else FAIL (1)
**
**		The algorithm is optimized by always trying to solve the row or column
**		that has the least empty zeroes first. In the example above, the algo
**		first tries to solve column 9,2,0,8,5,0,0,0,4 and/or 0,0,6,4,0,3,0,9,7
**		(4 zeroes) against row 0,9,0,0,5,0,7,4,1 which also has just 4 zeroes.
**
**		A copy of the board is used to try solutions?
**
**		static helper functions also contained in this file will be used, such
**		as: most_populated_row(int **board), most_populated_col(int **board),
**
*/

int	ft_isValidSudoku(int **board)
{
	int	*b;
	int		i;
	int		j;
	int		k;
	int		p;
	int		check;

	p = 0;
	b = (int *)malloc((COLS * sizeof(int)));
	i = 0;
	// check row, coluum, and 3x3 grid
	while (i < 3)
	{
		j = 0;
		while (j < COLS)
		{
			p = 0;
			while (p < ROWS)
				b[p++] = 0;
			k = 0;
			while (k < COLS)
			{
				check = 0;
				// check row
				if (i == 0)
					check = board[j][k];
				// check column
				else if (i == 1)
					check = board[k][j];
				// 3x3 grid
				else
					check = board[j / COLS * COLS + k / COLS][j % COLS * COLS + k % COLS];
				if (check == 0)
				{
					k++;
					continue ;
				}
				if (b[check - 1] == 1)
					return (0);
				b[check - 1] = 1;
				k++;
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	solve_sudoku(int **board)
{
	printf("%d\n", ft_isValidSudoku(board));
	
	if (board[0][0] == SUCCESS)
		return (board[0][0]);
	else return (SUCCESS);
}
