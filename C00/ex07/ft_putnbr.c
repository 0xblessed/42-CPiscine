/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <amunoz-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:49:27 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/08/16 16:39:37 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	imprimirvector(int i, char vect[])
{
	int	z;

	z = i;
	while (z >= 0)
	{
		write(1, &vect[z], 1);
		z--;
	}
}

void	verifica(int a)
{
	if (a == 0)
	{
		write(1, "0", 1);
	}
	if (a == -2147483648)
	{
		write(1, "2147483648", 11);
	}
}

void	ft_putnbr(int nb)
{
	int		a;
	int		b;
	int		i;
	int		c;
	char	vector1[12];

	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	a = nb;
	while (a > 0)
	{
		b = a % 10;
		c = 48 + b;
		vector1[i] = c;
		a = a / 10;
		i++;
	}
	imprimirvector(i - 1, vector1);
	verifica(nb);
}
