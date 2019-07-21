/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengle <sengle@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 09:11:38 by sengle            #+#    #+#             */
/*   Updated: 2019/07/21 10:31:18 by sengle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_putchar(char c);

/*
**	print_sudoku(board) outputs the sudoku board solution. For example:
**
**	9 1 4 3 7 5 2 6 8
**	2 8 7 4 9 6 1 5 3
**	3 6 5 8 1 2 4 7 9
**	8 4 6 5 2 1 3 9 7
**	5 2 9 6 3 7 8 1 4
**	7 3 1 9 8 4 5 2 6
**	1 5 3 7 4 9 6 8 2
**	6 9 8 2 5 3 7 4 1
**	4 7 2 1 6 8 9 3 5
**
**	A valid board is assumed
*/

void	print_sudoku(int **board)
{
	int	row;
	int	col;

	row = -1;
	while (++row < 9)
	{
		col = -1;
		while (++col < 9)
		{
			if (col > 0)
				ft_putchar(' ');
			ft_putchar((char)board[row][col] + '0');
		}
		ft_putchar('\n');
	}
}
