/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 00:35:08 by schahir           #+#    #+#             */
/*   Updated: 2024/09/11 16:14:40 by schahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	size_t	len;

	if (src == NULL)
		return (NULL);
	len = 0;
	while (src[len])
		len++;
	len++;
	dest = malloc(len * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}
/*#include<stdio.h>
int main()
{
	char src[] = "hello ";
	char *dest;
	dest = ft_strdup(src);
	printf("%s", dest);
	free (dest);
}*/
