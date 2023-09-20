/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:34:27 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/19 14:34:29 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_fibonacci(int index)
{
	if (index > 1)
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	else if (index <= -1)
	{
		return (-1);
	}
	else
	{
		return (index);
	}
}

/*int	main(void)
{
	printf("%d", ft_fibonacci(-2));
}*/