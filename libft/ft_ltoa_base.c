/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <juperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 20:41:19 by juperez           #+#    #+#             */
/*   Updated: 2024/06/10 23:56:30 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ltoa_base(ssize_t n, char *base)
{
	char	*s;
	size_t	a;
	size_t	blen;
	size_t	nlen;

	blen = ft_strlen(base);
	nlen = ft_snlen(n, blen);
	s = (char *)malloc(sizeof(char) * (nlen + 1));
	if (!s)
		return (NULL);
	s[nlen] = '\0';
	if (n == 0)
		*s = '0';
	if (n < 0)
		*s = '-';
	a = ft_abs(n);
	while (a)
	{
		s[--nlen] = base[a % blen];
		a /= blen;
	}
	return (s);
}
