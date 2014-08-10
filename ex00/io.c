/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <esanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/10 19:09:47 by esanchez          #+#    #+#             */
/*   Updated: 2014/08/10 20:31:49 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "io.h"

t_cell char_to_cell(char c)
{
	if(c == '.')
		return (0);
	else
		return (1 << (c - 49));
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
				sudoku->a[x][y] = char_to_cell(c);
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
