/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <amunoz-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:18:24 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/08/15 19:52:01 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int	*tab, int size)
{
	int	i;
	int	j;
	int	aux;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				aux = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = aux;
			}
			i++;
		}
		j++;
	}
}
