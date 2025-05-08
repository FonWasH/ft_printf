/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <juperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:51:16 by juperez           #+#    #+#             */
/*   Updated: 2024/06/08 20:06:54 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, void *s, size_t n)
{
	size_t	i;

	if (!d && !s)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(d + i) = *(unsigned char *)(s + i);
		i++;
	}
	return (d);
}
