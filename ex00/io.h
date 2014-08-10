/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <esanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/10 17:26:08 by esanchez          #+#    #+#             */
/*   Updated: 2014/08/10 18:49:25 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IO_H
# define IO_H

# include "types.h"

int parse(char **argv, t_sudoku *sudoku);

void display(t_sudoku *sudoku);

#endif
