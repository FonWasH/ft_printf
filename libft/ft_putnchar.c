/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <juperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 00:16:23 by juperez           #+#    #+#             */
/*   Updated: 2024/06/09 03:04:46 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	ft_putnchar(char c, int fd, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (write(fd, &c, 1) < 0)
			return (-1);
		i++;
	}
	return (i);
}
