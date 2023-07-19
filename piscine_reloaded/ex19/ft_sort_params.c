/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:36:02 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/07/19 17:20:15 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char **argv)
{
	int		index;
	char	*temp;
	int		j;
	int		counter;

	index = 1;
	while (index < argc - 1)
	{
		j = index + 1;
		while (argv[index][0])
		{
			counter = 0;
			if (argv[index][0] > argv[j][0] && argv[index][counter] != '\0')
			{
				temp = argv[index];
				argv[index] = argv[j];
				argv[j] = temp;
				j++;
				counter++;
			}
			index++;
		}
		printf("A");
	}
}
