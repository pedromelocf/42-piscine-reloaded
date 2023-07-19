/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:06:02 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/07/18 15:22:55 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	counter;

	counter = '0';
	while (counter <= '9')
	{
		ft_putchar(counter);
		counter++;
	}
}
