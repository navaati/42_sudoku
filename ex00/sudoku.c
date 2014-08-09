/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <lgillot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/09 22:07:26 by lgillot-          #+#    #+#             */
/*   Updated: 2014/08/09 23:06:00 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_case	*trouve_case_vide(t_sudoku *sudoku)
{
	// boucle while
}

int 	sudoku(t_sudoku *sudoku)
{
	t_case	*case_vide;
	t_case	possibilités;
	t_case	possibilité_courante;
	int		une_seule;
	sudoku	*try;
	
	case_vide = trouve_case_vide(sudoku);
	/* deux cas de base */
	if (case_vide == NULL)
		return (1);
	if (possibilités == 0)
	{
		return (-1);
	}
	
	/* cas de récursion */
	possibilités = trouve_possibilités(t_case, sudoku);
	try = malloc(sarace);
	pour_chaque_possibilité(possibilité_courante, possibilités)
	{
		copy(try, sudoku);
		*case_vide = possibilité_courante;
		if (sudoku(try) == 1)
		{
			copy(sudoku,try);
			free(try);
			return(1);
		}
	}
	free(try);
	return(-1);
}
