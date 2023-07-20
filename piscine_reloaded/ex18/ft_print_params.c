/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:37:06 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/07/20 12:45:14 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
