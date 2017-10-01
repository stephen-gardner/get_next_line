/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:15:29 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/14 20:52:03 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ASSIGNMENT:
** Re-code similarly named libc function.
** This function lacks optimizations such as word copying and
**  vectorization.
*/

void	*ft_memset(void *s, int c, size_t n)
{
	t_byte	*dst;
	t_byte	b;
	size_t	i;

	dst = (t_byte *)s;
	b = (t_byte)c;
	i = 0;
	while (i < n)
		dst[i++] = b;
	return (s);
}
