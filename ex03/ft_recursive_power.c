/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:32:16 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/22 13:26:08 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if ((power == 0 && nb == 0) || power == 0)
		return (1);
	if (power > 1)
	{
		power--;
		nb = nb * ft_recursive_power(nb, power);
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
	printf("Total = %d\n", ft_recursive_power(n, p));
}
*/
