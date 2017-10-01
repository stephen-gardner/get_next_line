/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:14:26 by sgardner          #+#    #+#             */
/*   Updated: 2017/09/20 13:23:48 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** ASSIGNMENT:
** Allocates (with malloc(3)) and returns a "fresh" memory area.
** The memory allocated is initialized to 0.
** If the allocation fails, the function returns NULL.
*/

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if ((mem = malloc(size)))
		ft_memset(mem, '\0', size);
	return (mem);
}
