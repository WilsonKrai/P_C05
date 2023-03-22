/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:08:03 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/22 18:33:45 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
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
				nb = (ft_find_next_prime(nb + 1));
			else
				j++;
		}
		i++;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int	n = 2;
	scanf("%d", &n);
	printf("Is Prime? %d\n", ft_find_next_prime(n));
}
*/
