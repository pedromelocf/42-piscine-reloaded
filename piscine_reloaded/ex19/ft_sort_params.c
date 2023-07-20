/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:36:02 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/07/20 18:36:24 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_putstr(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght])
	{
		ft_putchar(str[lenght]);
		lenght++;
	}
}

int	main(int argc, char **argv)
{
	int	counter;
	int	indexverify;
	int	indexprint;

	indexverify = 1;
	indexprint = 1;
	while (indexverify < argc)
	{
		counter = indexverify + 1;
		while (counter < argc)
		{
			if (ft_strcmp(argv[indexverify], argv[counter]) > 0)
				ft_swap(&argv[indexverify], &argv[counter]);
			counter++;
		}
		indexverify++;
	}
	while (indexprint < argc)
	{
		ft_putstr(argv[indexprint]);
		ft_putchar('\n');
		indexprint++;
	}
}
