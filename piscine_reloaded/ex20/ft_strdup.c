/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-melo <pedro-melo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:28:03 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/07/21 19:23:27 by pedro-melo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *newstring;
	int index1;
	int index2;

	index1 = 0;
	index2 = 0;
	while (src[index1])
		index1++;
	newstring = (char*)malloc(sizeof(char) * index1 + 1);
	while (index2 < index1)
	{
		newstring[index2] = src[index2];
		index2++;
	}
	newstring[index2] = '\0';	
	return newstring;
}
