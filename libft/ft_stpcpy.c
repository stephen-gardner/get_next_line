/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stpcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:16:38 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/14 22:50:27 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** CUSTOM:
** Re-production of similarly named libc function.
** This function lacks optimizations such as word copying and
**  vectorization.
*/

char	*ft_stpcpy(char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while ((s1[i] = s2[i]))
		i++;
	return (s1 + i);
}
