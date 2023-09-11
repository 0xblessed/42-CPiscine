/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <amunoz-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:17:27 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/08/24 04:39:41 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int 
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	cont;
	unsigned int	j; 

	cont = 0;
	i = 0;

	if (size > 0)
	{
		while (i < size - 1 && cont == 0)
		{
			dest[i] = src[i];
			if (src[i] == '\0')
			{
				cont = 1; 
			}
			i++;
		}
		return (i - 1);
	}
	j = i; 
	while (j < size)
	{
		dest[j] = '\0';
		j++;
	}
	return (i);
}

int main()
{
  char  src[] = "this code works";
  char  dest[] = "HOLbaafjajkfnajknkas";
//	printf("strlcpy %lu\n", strlcpy(dest, src, 0));
	printf("%d\n", ft_strlcpy(dest, src, 0));
  printf("%s", dest);
}
