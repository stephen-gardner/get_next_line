/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 23:07:15 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/14 23:01:37 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** ASSIGNMENT:
** Allocates (with malloc(3)) and returns a "fresh" substring
**  from the string given as argument.
** The substring begins at start and is of size len.
** If start and len aren't refering to a valid substring, the
**  behavior is undefined.
** If the allocation fails, the function returns NULL.
*/

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*sub;

	if ((sub = (char *)malloc(len + 1)))
	{
		ft_memcpy(sub, s + start, len);
		sub[len] = '\0';
	}
	return (sub);
}
