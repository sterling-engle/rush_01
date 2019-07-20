/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_sudoku_board.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengle <sengle@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 09:11:38 by sengle            #+#    #+#             */
/*   Updated: 2019/07/20 10:27:32 by sengle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

/*
**	make_sudoku_board(argc, argv) converts argv[1..9] to an int sudoku array.
**		It returns NULL if argc != 10 or there is invalid input.
*/
int		**make_sudoku_board(int argc, char **argv)
{
	if (argc != 10)
		return (NULL);
}
