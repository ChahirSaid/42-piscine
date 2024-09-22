/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:48:45 by schahir           #+#    #+#             */
/*   Updated: 2024/09/16 22:13:52 by schahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_full_size(int size, char **strs, char *sep)
{
	int	i;
	int	full_size;

	i = 0;
	full_size = 0;
	while (i < size)
		full_size += ft_strlen(strs[i++]);
	full_size += ft_strlen(sep) * (size - 1);
	return (full_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		full_size;
	char	*dest;

	if (!size)
	{
		dest = (char *)malloc(1);
		dest[0] = '\0';
		return (dest);
	}
	full_size = ft_full_size(size, strs, sep);
	dest = malloc(sizeof(char) * (full_size + 1));
	if (dest == NULL)
		return (NULL);
	dest[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}
/*#include <stdio.h>

int    main()
{
    char    *strs[] = {"This", "is", "a",  "test"};
    char    *sep = " ";
    char    *res = ft_strjoin(4, strs, sep);

    printf("%s", res);
    free (res);
}*/
