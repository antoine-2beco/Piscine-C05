/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:43:10 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/18 15:43:11 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	x;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	x = nb - 1;
	while (x > 0)
	{
		nb *= x;
		x --;
	}
	return (nb);
}

/*int	main(void)
{
	printf("%d", ft_iterative_factorial(3));
}*/