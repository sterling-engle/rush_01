/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengle <sengle@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 09:11:38 by sengle            #+#    #+#             */
/*   Updated: 2019/07/20 10:29:57 by sengle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_puts(char *str);

/*
**	make_sudoku_board(argc, argv) converts argv[1..9] to an int sudoku array.
**		It returns NULL if argc != 10 or there is invalid input.
*/
int		**make_sudoku_board(int argc, char **argv);

/*
**	solve_sudoku called with two dimensional int array containing initial board
*/
int		solve_sudoku(int **board);

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
*/
void	print_sudoku(int **board);

/*
**	main - argv[1] .. argv[9] look like this:
**		"9...7...." "2...9..53" ".6..124.." "84...1.9." "5.....8.." ".31..4..."
**		"..37..68." ".9..5.741" "47......."
**
**	int **board looks like this for arguments above after make_sudoku_board():
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
**	main() returns 0 upon success, otherwise 1.
*/
int	main(int argc, char **argv)
{
	int	**board;

	board = make_sudoku_board(argc, argv);
	if (board == NULL)
	{
		ft_puts("Error\n");
		return (1);
	}
	if (solve_sudoku(board))
	{
		print_sudoku(board);
		return (0);
	}
	else
	{
		ft_puts("Error\n");
		return (1);
	}
}
