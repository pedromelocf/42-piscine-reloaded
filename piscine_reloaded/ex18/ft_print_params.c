/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:37:06 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/07/19 14:10:26 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	counter;
	int	i;

	i = 1;
	while (argc > 1)
	{
		counter = 0;
		while (argv[i][counter])
		{
			ft_putchar(argv[i][counter]);
			counter++;
		}
		ft_putchar('\n');
		i++;
		argc--;
	}
	return (0);
}
