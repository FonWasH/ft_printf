/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <juperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:52:05 by juperez           #+#    #+#             */
/*   Updated: 2024/06/09 17:23:59 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s)
{
	char	*d;
	size_t	i;

	i = ft_strlen(s);
	d = (char *)malloc(i + 1);
	if (!d)
		return (NULL);
	ft_strlcpy(d, s, i + 1);
	return (d);
}
