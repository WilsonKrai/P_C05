/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:53:20 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/21 19:01:29 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	save;

	save = nb;
	i = power;
	if ((power == 0 && nb == 0) || power == 0)
		return (1);
	while (i > 1)
	{
		nb *= save;
		i--;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int	n = 0;
	int	p = 0;

	printf("Number\n");
	scanf("%d", &n);
	printf("Power\n");
	scanf("%d", &p);
	printf("Total = %d\n", ft_iterative_power(n, p));
}
*/
