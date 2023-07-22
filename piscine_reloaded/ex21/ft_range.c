/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 17:01:48 by pedro-melo        #+#    #+#             */
/*   Updated: 2023/07/22 11:37:43 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>>

int	*ft_range(int min, int max)
{
	int	*array;
	int	counter;
	int	index;

	counter = 0;
	index = 0;
	if (min >= max)
		return (NULL);
	while (counter + min < max)
		counter++;
	array = (int *)malloc(sizeof(int) * counter - 1);
	while (min < max)
	{
		array[index] = min;
		index++;
		min++;
	}
	return (array);
}
