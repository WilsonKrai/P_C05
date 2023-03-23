/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:01:13 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/23 13:12:46 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	if (i > 0)
		nb = nb * ft_recursive_factorial(i);
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int	n = 0;

	printf("Calc factorial of: ");
	scanf("%d", &n);
	printf("%d\n", ft_recursive_factorial(n));
}
*/
