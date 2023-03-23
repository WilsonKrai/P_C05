/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:53:20 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/23 13:30:50 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	save;

	i = power;
	save = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (i > 0)
	{
		save = save * nb;
		i--;
	}
	return (save);
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
