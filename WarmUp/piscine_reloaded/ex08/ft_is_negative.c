/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:07:47 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/07/17 18:13:30 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{	
	write(1, &c, 1);
}

void ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else 
		ft_putchar('P');
}
/* int main	(void)
{
    int i;

    i = 100;
    ft_is_negative(i);
}
 */