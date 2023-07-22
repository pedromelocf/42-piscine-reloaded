/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:28:03 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/07/22 11:23:35 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*newstring;
	int		index1;
	int		index2;

	index1 = 0;
	index2 = 0;
	while (src[index1])
		index1++;
	newstring = (char *)malloc(sizeof(char) * index1 + 1);
	while (index2 < index1)
	{
		newstring[index2] = src[index2];
		index2++;
	}
	newstring[index2] = '\0';
	return (newstring);
}
