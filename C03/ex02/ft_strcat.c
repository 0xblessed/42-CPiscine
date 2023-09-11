/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <amunoz-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 21:24:06 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/08/21 18:30:12 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[j])
	{
		j++; 
	}
	while (src[i])
	{
		dest[j] = src[i]; 
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}