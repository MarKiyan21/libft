/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkyianyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 20:26:25 by mkyianyt          #+#    #+#             */
/*   Updated: 2016/11/30 20:42:33 by mkyianyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t n)
{
	unsigned char	*tmp;

	tmp = dest;
	while (n > 0)
	{
		*tmp = 0;
		tmp++;
		n--;
	}
}
