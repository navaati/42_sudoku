/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <lgillot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/09 17:41:39 by lgillot-          #+#    #+#             */
/*   Updated: 2014/08/10 19:04:55 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

# include <stdint.h>

typedef uint16_t	t_cell;
typedef uint16_t	t_possibilities;

typedef struct		s_sudoku
{
	t_cell a[9][9];
}					t_sudoku;

#endif
