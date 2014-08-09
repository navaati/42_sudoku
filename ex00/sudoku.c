/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <lgillot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/09 22:07:26 by lgillot-          #+#    #+#             */
/*   Updated: 2014/08/10 00:18:26 by lgillot-         ###   ########.fr       */
/*   Updated: 2014/08/09 23:56:49 by lgillot-         ###   ########.fr       */
=======
/*   Updated: 2014/08/09 23:56:09 by lgillot-         ###   ########.fr       */
>>>>>>> Stashed changes
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
	sudoku	try;
	
	case_vide = trouve_case_vide(&sudoku);
	/* deux cas de base */
	if (case_vide == NULL) // On est au bout du tableau, le sudoku est complet
		return (1);
	possibilités = trouve_possibilités(t_case, sudoku);
	if (possibilités == 0) // Ou alors on ne trouve aucune possibilité, on fail 
	{
		return (-1);
	}
	
	/* cas de récursion */
	pour_chaque_possibilité(possibilité_courante, possibilités)
	{
		*case_vide = possibilité_courante;
		try = *sudoku;
		if (sudoku(&try) == 1)
		{
			*sudoku = try;
			return(1);
		}
	}
	return(-1);
}
