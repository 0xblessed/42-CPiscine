/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <amunoz-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:16:47 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/08/31 19:21:40 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **argv, int pos)
{
	char *tmp;

	tmp = argv[pos];
	argv[pos] = argv[pos + 1];
	argv[pos+1] = tmp;
}

void	imprimir(int j, int argc, char *argv[])
{
	int	k;

	while (j < argc)
	{
		k = 0;
		while (argv[j][k] != '\0')
		{
			write(1, &argv[j][k], 1);
			k++;
		}
		write(1, "\n", 1);
		j++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - i)
		{
			if (*argv[j] > *argv[j + 1])
				ft_swap(argv, j);
			j++;
		}
		i++;
	}
	j = 1;
	imprimir(j, argc, argv);
	return (0);
}
