/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <juperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:51:23 by juperez           #+#    #+#             */
/*   Updated: 2024/06/08 21:16:56 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, void *s, size_t n)
{
	if (!d && !s)
		return (NULL);
	if (d < s)
		return (ft_memcpy(d, s, n));
	while (n--)
		*(unsigned char *)(d + n) = *(unsigned char *)(s + n);
	return (d);
}
