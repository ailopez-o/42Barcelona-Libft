/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailopez- <ailopez-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:32:47 by ailopez-          #+#    #+#             */
/*   Updated: 2022/05/11 19:33:26 by ailopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	int valor;
	valor = ft_strncmp("abcdef", "abc\xfdxx", 5);	
	
	printf ("Valor [%d]", valor);
}



