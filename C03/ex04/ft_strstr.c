/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <amunoz-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:37:32 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/08/22 13:21:43 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cuenta(char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	cont;

	i = 0;
	j = 0;
	cont = 0;
	if (to_find[0] == '\0')
		return (str);
	j = cuenta(to_find);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			cont = 0;
			while (str[i + cont] == to_find[cont])
			{
				cont++;
				if (cont == j)
					return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
