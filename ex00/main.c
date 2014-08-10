/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <esanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/10 17:36:41 by esanchez          #+#    #+#             */
/*   Updated: 2014/08/10 23:37:40 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "io.h"
#include "types.h"
#include "sudoku.h"

void error()
{
	write(2, "Erreur\n", 7);
}

int main(int argc, char **argv)
{
	t_sudoku sudoku;
	
	if (argc != 10)
	{
		error();
		return (1);
	}
	if (parse(argv+1, &sudoku) == -1)
	{
		error();
		return (1);
	}
	if (solve_sudoku(&sudoku) == -1)
	{
		error();
		return (1);
	}

	display(&sudoku);
	return(0);
}
