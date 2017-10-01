/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:15:03 by sgardner          #+#    #+#             */
/*   Updated: 2017/09/19 21:15:56 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ASSIGNMENT:
** Re-code similarly named libc function.
** This function lacks optimizations such as word copying and
**  vectorization.
*/

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	const t_byte	*src;
	t_byte			*dst;
	size_t			i;

	src = (const t_byte *)s2;
	dst = (t_byte *)s1;
	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (s1);
}
