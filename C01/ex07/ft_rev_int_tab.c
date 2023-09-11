/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <amunoz-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:29:02 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/08/15 17:48:07 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < (size / 2))
	{
		j = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size -1 - i] = j;
		i++;
	}
}
