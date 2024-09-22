/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:35:07 by schahir           #+#    #+#             */
/*   Updated: 2024/09/18 17:46:40 by schahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_check_sep(str[i], charset))
		i++;
	return (i);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	cmp;

	i = 0;
	cmp = 0;
	while (str[i])
	{
		while (str[i] && ft_check_sep(str[i], charset))
			i++;
		if (str[i])
			cmp++;
		while (str[i] && !ft_check_sep(str[i], charset))
			i++;
	}
	return (cmp);
}

char	*ft_strdup(char *str, char *charset)
{
	char	*copy;
	int		len;
	int		i;

	len = ft_strlen(str, charset);
	i = 0;
	copy = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = 0;
	return (copy);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;

	i = 0;
	strs = malloc(sizeof(char *) * (ft_count_words(str, charset) + 1));
	while (*str)
	{
		while (*str && ft_check_sep(*str, charset))
			str++;
		if (*str)
		{
			strs[i] = ft_strdup(str, charset);
			i++;
		}
		while (*str && !ft_check_sep(*str, charset))
			str++;
	}
	strs[i] = 0;
	return (strs);
}
