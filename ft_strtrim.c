/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailopez- <ailopez-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 10:54:46 by ailopez-          #+#    #+#             */
/*   Updated: 2022/05/14 18:38:48 by ailopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
/*

	unsigned int    len;
    char            *str;
    if (!s1 || !set)
        return (0);
    while (*s1 && ft_strchr(set, *s1))
        s1++;
    len = ft_strlen(s1);
    while (len > 0 && ft_strchr(set, s1[len]))
        len--;
    str = ft_substr(s1, 0, len + 1);
    return (str);
*/	
	
	size_t	i;
	size_t	j;
	char	*ptr;
	size_t	temp;

 	 if (!s1 || !set)
        return (0);
	 i = 0;
 	 while (ft_strchr(set, *(s1 + i)) && *s1)
		i++;
	j = ft_strlen(s1);
	while (ft_strchr(set, *(s1 + j)))
		j--;
	ptr = malloc((j - i + 5) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	//printf("Size Cadena[%d]\n", (int)(j - i));

//	ft_strlcpy(ptr,(char *)(s1 + i), j - i + 2 );

    //ptr = ft_substr(s1 + i, 0, j - i + 1);
	///return (ptr);
	temp = 0;
	while (temp <= (j-i))
	{
		//printf ("CARACTER INSIDE [%c]\n", s1[i+temp]);
		ptr[temp] = s1[i+temp];
		//printf ("CARACTER PTR [%c]\n", ptr[temp]);		
		temp ++;

	}
	
	//ft_memmove(ptr, s1 + i, j - i);
	*(ptr + j - i + 1) = '\0';
	//printf("CADENA IN [%s]\n",ptr);
	return (ptr);
}
