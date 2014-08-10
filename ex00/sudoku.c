/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <lgillot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/09 22:07:26 by lgillot-          #+#    #+#             */
/*   Updated: 2014/08/10 02:04:58 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_case	*next_empty_cell(t_sudoku *sudoku)
{
	// boucle while
}

int 	sudoku(t_sudoku *sudoku)
{
	t_case	*empty_cell;
	t_case	possible_vals;
	t_case	curr_val;
	sudoku	try;
	
	empty_cell = next_empty_cell(&sudoku);
	/* two base case */
	if (empty_cell == NULL) // We're at end of array, sudoku is complete
		return (1);
	possible_vals = lookup_possibilities(empty_cell, sudoku);
	if (possible_vals == 0) // Or there is no possible value for this cell, we fail
	{
		return (-1);
	}
	
	/* recursion case : we fill the cell with an unsure value and we recurse */
	for_each_possibility(curr_val, possible_vals)
	{
		*empty_cell = current_val;
		try = *sudoku;
		if (sudoku(&try) == 1) // If the recursive-us succeeds...
		{
			*sudoku = try;
			return(1); // ...we were right and we're done
		}
	}
	return(-1);
}
