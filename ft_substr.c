/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitorlopezdeaudicana <marvin@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:29:55 by aitorlope         #+#    #+#             */
/*   Updated: 2022/05/13 17:10:31 by ailopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	char	*ptr;

	if (!s)
		return (NULL);
	if (len == 0 || start > ft_strlen(s))		
		return(ft_strdup(""));
	ptr = malloc ((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr,(char *)(s + start),len + 1);
	return (ptr);
}
