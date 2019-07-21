/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengle <sengle@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 09:11:38 by sengle            #+#    #+#             */
/*   Updated: 2019/07/21 09:58:34 by sengle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "sudoku.h"

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

int	solve_sudoku(int **board)
{
	if (board[0][0] == SUCCESS)
		return (board[0][0]);
	else return (SUCCESS);
}
