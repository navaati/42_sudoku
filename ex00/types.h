/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bitfield.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <lgillot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/09 17:41:39 by lgillot-          #+#    #+#             */
/*   Updated: 2014/08/10 00:04:59 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITFIELD_H
# define BITFIELD_H

# include <stdint.h>

typedef uint16_t	t_case;
typedef struct		s_sudoku
{
	t_case a[9][9];
}					t_sudoku;

#endif
