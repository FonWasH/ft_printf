/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <juperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:51:43 by juperez           #+#    #+#             */
/*   Updated: 2024/06/10 23:56:47 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	ft_putnbr(ssize_t n, int fd)
{
	char	*s;
	ssize_t	len;

	s = ft_ltoa(n);
	if (!s)
		return (-1);
	if (ft_putstr(s, fd) < 0)
		return (free(s), -1);
	len = ft_strlen(s);
	return (free(s), len);
}
