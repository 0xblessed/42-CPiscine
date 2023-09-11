/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <amunoz-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:56:49 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/08/14 11:41:32 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_actuallyprint(int a, int b)
{
	char	d;
	char	c;

	d = a % 10 + 48;
	c = b % 10 + 48;
	write(1, &d, 1);
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int	a;
	int	b;

	while (a <= 9)
	{
		b = a + 1;
		while (b <= 9)
		{
			ft_print_actuallyprint(a, b);
			if (a != 8)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
