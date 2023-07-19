/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:21:00 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/07/18 18:52:39 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	counter;

	counter = 0;
	if (nb < 0)
		return (0);
	while (counter < 47000)
	{
		if ((counter * counter) == nb)
			return (counter);
		counter++;
	}
	return (0);
}
