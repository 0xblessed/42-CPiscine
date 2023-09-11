/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <amunoz-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:09:41 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/08/13 19:47:13 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_actuallyprint(int a)
{
	char	d;

	d = a / 10 + 48; 
	write(1, &d, 1);
	d = a % 10 + 48;
	write(1, &d, 1);
}

void	ft_print_comb2(void)
{
	int	vector1[2];

	vector1[0] = 0;
	while (vector1[0] <= 99)
	{
		vector1[1] = vector1[0] + 1;
		while (vector1[1] <= 99)
		{
			ft_print_actuallyprint(vector1[0]);
			write(1, " ", 1);
			ft_print_actuallyprint(vector1[1]);
			if (vector1[0] != 98)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			vector1[1]++;
		}
		vector1[0]++;
	}
}
