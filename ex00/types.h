/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bitfield.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <lgillot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/09 17:41:39 by lgillot-          #+#    #+#             */
/*   Updated: 2014/08/09 18:12:55 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITFIELD_H
# define BITFIELD_H
typedef struct
{
	int	is_alone;
	union
	{
		char alone;
		char bits;
	}
}	t_case;
#endif
