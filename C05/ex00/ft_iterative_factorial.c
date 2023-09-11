/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <amunoz-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 20:07:13 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/08/31 20:27:54 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int i;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	i = nb;
	while (i > 1)
	{
		nb = nb * (i - 1);
		i--;
	}
	return nb;
}
/*
int main ()
{
	int i = ft_iterative_factorial(-1);
	printf("%d", i);
}
*/
