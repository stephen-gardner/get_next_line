/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:15:13 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/14 20:51:19 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** ASSIGNMENT:
** Takes as a parameter the address of a memory area that needs
**  to be freed with free(3), then puts the pointer to NULL.
*/

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}
