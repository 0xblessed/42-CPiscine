/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <amunoz-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:38:35 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/08/31 19:28:03 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int a, char *str[])
{
	int	i;

	i = 0;
	a = a + 0;
	while (str[0][i] != '\0')
	{
		write(1, &str[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
