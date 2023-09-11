/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <amunoz-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:41:01 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/08/23 19:28:25 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0; 
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') 
			|| (str[i] >= 'A' && str[i] <= 'Z') 
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - ('a' - 'A');
			i++;
			while ((str[i] >= 'a' && str[i] <= 'z') 
				|| (str[i] >= 'A' && str[i] <= 'Z'))
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] = str[i] + ('a' - 'A');
				i++;
			}
		}
		else
			i++;
	}
	return (str);
}
