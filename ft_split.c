/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitorlopezdeaudicana <marvin@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:11:02 by aitorlope         #+#    #+#             */
/*   Updated: 2022/05/15 18:45:42 by aitorlope        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	ft_numwrds(char const *s, char c)
{
	int	i;
	int	numwrd;

	i = 0;
	numwrd = 0;
	while (*(s + i))
	{
		if (*(s + i) == c && *(s + i + 1) != c)
			numwrd++;
		i++;
	}
	return (numwrd + 2);
}

char	**ft_free(char **ptr, int num)
{
	int	i;

	i = 0;
	while (i < num)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ptrtable;
	int		first;
	int		numwrd;
	int		lentable;

	lentable = ft_numwrds(s, c);
	ptrtable = (char **)malloc(lentable * sizeof(char *));
	if (ptrtable == NULL)
		return (NULL);
	first = 1;
	numwrd = 0;
	while (*s)
	{	
		if (*s == c || first)
		{
			first = 0;
			while (*s == c)
				s++;
			if (*s)
			{
				ptrtable[numwrd] = ft_substr(s, 0, ft_strchr(s, c) - s);
				if (ptrtable[numwrd] == NULL)
					return (ft_free(ptrtable, lentable));
				numwrd++;
			}
		}
		if (*s)
			s++;
	}
	ptrtable[numwrd] = NULL;
	return (ptrtable);
}
