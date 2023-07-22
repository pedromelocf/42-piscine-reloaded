/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-melo <pedro-melo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 17:01:48 by pedro-melo        #+#    #+#             */
/*   Updated: 2023/07/21 17:31:08 by pedro-melo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>>

int *ft_range(int min, int max)
{
	int *array;
	int counter;
	int index;

	counter = 0;
	index = 0;
	if(min >= max)
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
	return array;
}

int main(void)
{
	int min;
	int max;

	min = 2;
	max = 21;
	ft_range(min, max);
}