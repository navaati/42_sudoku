/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <lgillot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/10 16:49:36 by lgillot-          #+#    #+#             */
/*   Updated: 2014/08/10 23:31:15 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include "types.h"

int				solve_sudoku(t_sudoku *sudoku);
t_possibilities lookup_possibilities(t_sudoku *sudoku, int column, int line);
t_cell			next_possible_val(t_cell current_val,
					const t_possibilities possible_vals);
t_cell			*next_empty_cell(t_sudoku *sudoku, int *x, int *y);

#endif
