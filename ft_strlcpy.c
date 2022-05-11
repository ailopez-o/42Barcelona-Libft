/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitorlopezdeaudicana <marvin@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:17:40 by aitorlope         #+#    #+#             */
/*   Updated: 2022/05/11 11:39:57 by aitorlope        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	size;

	size = 0;
	while (*(src + size) != '\0' && size < dstsize)
	{
		*(dst + size) = *(src + size);
		size ++;
	}
	*(dst + size) = '\0';
	return (ft_strlen(src) + size);
}
