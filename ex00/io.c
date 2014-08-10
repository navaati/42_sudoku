/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <esanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/10 19:09:47 by esanchez          #+#    #+#             */
/*   Updated: 2014/08/10 23:37:16 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "types.h"
#include "io.h"

t_cell char_to_cell(char c)
{
	if(c == '.')
		return (0);
	else
		return (1 << (c - 49));
}

char cell_to_char(t_cell cell)
{
	int i;

	i = 0;
	while (cell != 1)
	{
		i++;
		cell >>= 1;
	}
	return (i + 49);
}

void	pc(char c)
{
	write(1, &c, 1);
}

void display(t_sudoku *sudoku)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (y < 9)
	{
		while (x < 9)
		{
			pc(sudoku->a[y][x]);
			if(x == 9)
				pc('\n');
			else
				pc(' ');
			x++;
		}
		x = 0;
		y++;
	}
}

int parse(char **argv, t_sudoku *sudoku)
{
	int x;
	int y;
	char c;

	x = 0;
	y = 0;
	
	while(y < 9)	
	{	   	
		while(x < 9)
		{
			c = (argv[y])[x];
			if((c >= '1' && c <= '9') || c == '.')
			{
				sudoku->a[y][x] = char_to_cell(c);
			}
			else
				return (-1);
				
			x++;
		}
		if((argv[y])[x] != '\0')
			return (-1);
		y++;
		x = 0;
	}
	return (1);
}
