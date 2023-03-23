/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:09:58 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/23 15:57:31 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	n = 0;
	
	while (n < 200)
	{
		printf("Number %d ", n);
		printf("Is Prime? %d\n", ft_is_prime(n));
		n++;
	}
}
*/
