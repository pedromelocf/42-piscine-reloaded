/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:36:02 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/07/19 12:56:11 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}
int	main(int argc, char **argv)
{
	int	counter;
	int	*temp;

	argc = 0;
	temp = 0;
	while (argc)
	{
		counter = 0;
		while (argc < counter - 1)
		{
			if (argv[argc] > argv[counter])
			{
				temp = argv[argc];
				argv[argc] = argv[counter];
				argv[counter] = temp;
			}
			argc++;
			ft_putchar(argv[counter]);
			ft_putchar('\n');
		}
		argc++;
	}
	return (0);
}
