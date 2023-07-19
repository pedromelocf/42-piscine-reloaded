/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:12:00 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/07/19 13:17:29 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 0;
	if (nb < 0 || nb >= 13)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
