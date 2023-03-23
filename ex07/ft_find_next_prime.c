/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:08:03 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/23 15:59:09 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (nb = 2);
	while (i < nb)
	{
		if (nb % i == 0)
			nb = (ft_find_next_prime(nb + 1));
		else
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
