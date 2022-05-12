/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitorlopezdeaudicana <marvin@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:36:10 by aitorlope         #+#    #+#             */
/*   Updated: 2022/05/12 09:49:28 by aitorlope        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t leni)
{
	int i;
	int j;

	if (needle == NULL)
		return ((char *)haystack);
	i = 0;
	while(*(haystack + i) != '\0' && leni > 0)
	{
		j = 0;
		while (*(haystack + i) == *(needle + j))
		{
			if (*(needle + j) == '\0')
				return (char *)(haystack + i - j);
			j++;
			i++;
		}
		i++;
		leni --;
	}
	return (NULL);
}


