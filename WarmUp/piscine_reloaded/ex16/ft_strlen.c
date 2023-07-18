/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:27:50 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/07/17 18:31:03 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	char *string;
	int counter;
	
	counter = 0;
	string = str;
	while (*string != '\0')
	{
		string++;
		counter;
	}
	return(counter);
}