/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:09:58 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/22 18:07:09 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	i = 2;
	j = 2;
	if (nb < 1)
		return (0);
	while (i < nb)
	{
		j = 2;
		while (j < nb)
		{
			if (i * j == nb)
				return (0);
			else
				j++;
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	n = 2;
	
	while (n < 200)
	{
		printf("Number %d ", n);
		printf("Is Prime? %d\n", ft_is_prime(n));
		n++;
	}
}
*/
