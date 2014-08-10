/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <lgillot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/09 22:07:26 by lgillot-          #+#    #+#             */
/*   Updated: 2014/08/10 23:00:51 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "sudoku.h"

t_cell	*next_empty_cell(t_sudoku *sudoku)
{
	t_cell *curr_cell;
	t_cell *end;

	curr_cell = &(sudoku->a[0][0]);
	end = curr_cell + 9 * 9;
	while (curr_cell < end)
	{
		if (*curr_cell == 0)
			return (curr_cell);
		curr_cell++;
	}
	return (NULL);
}

t_cell	next_possible_val(t_cell current_val, const t_possibilities possible_vals)
{
	if (current_val == 0)
		current_val = 1;
	else
		current_val <<= 1;
	while (current_val != 0 && (current_val & possible_vals) == 0)
		current_val <<= 1;
	return (current_val);
}

t_possibilities lookup_possibilities(t_cell *empty_cell, t_sudoku *sudoku)
{
	(void)empty_cell;
	(void)sudoku;
	return (0);
}

int 	solve_sudoku(t_sudoku *sudoku)
{
	t_cell	*empty_cell;
	t_cell	possible_vals;
	t_cell	curr_val;
	t_sudoku	try;
	
	empty_cell = next_empty_cell(sudoku);
	/* two base case */
	if (empty_cell == NULL) // We're at end of array, sudoku is complete
		return (1);
	possible_vals = lookup_possibilities(empty_cell, sudoku);
	if (possible_vals == 0) // Or there is no possible value for this cell, we fail
	{
		return (-1);
	}
	
	/* recursion case : we fill the cell with an unsure value and we recurse */
	curr_val = 0;
	while ((curr_val = next_possible_val(curr_val, possible_vals)) != 0)
	{
		*empty_cell = curr_val;
		try = *sudoku;
		if (solve_sudoku(&try) == 1) // If the recursive-us succeeds...
		{
			*sudoku = try;
			return(1); // ...we were right and we're done
		}
	}
	return(-1);
}
