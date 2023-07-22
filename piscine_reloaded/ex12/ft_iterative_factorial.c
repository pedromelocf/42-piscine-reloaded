/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:02:48 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/07/22 16:18:23 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 1)
	{
		while (nb > 1)
		{
			result *= nb;
			nb--;
		}
	}
	return (result);
}
