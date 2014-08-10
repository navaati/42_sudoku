/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <lgillot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/09 22:07:26 by lgillot-          #+#    #+#             */
/*   Updated: 2014/08/10 02:30:44 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_case	*next_empty_cell(const t_sudoku *sudoku)
{
	t_case *curr_cell;

	curr_case = &(sudoku->array);
	while (curr_case < (void*)sudoku + sizeof(sudoku->a))
	{
		if (*curr_case == 0)
			return (curr_case);
	}
	return (NULL);
}

t_case	next_possible_val(t_case current_val, const t_possibilities possible_vals)
{
	if (current_val == 0)
		current_val = 1;
	else
		current_val <<= 1;
	while (current_val != 0 && (current_val & possible_vals) == 0)
		current_val <<= 1;
	return (current_val);
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
	curr_val = 0;
	while (curr_val = next_possible_val(curr_val, possible_vals))
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
