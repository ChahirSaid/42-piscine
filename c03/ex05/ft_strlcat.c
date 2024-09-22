/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 21:09:48 by schahir           #+#    #+#             */
/*   Updated: 2024/09/07 14:55:32 by schahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	j = 0;
	slen = 0;
	dlen = 0;
	while (dest[dlen])
		dlen++;
	while (src[slen])
		slen++;
	i = dlen;
	while (src[j] && i < (size - 1) && size != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (dlen > size)
		return (size + slen);
	return (dlen + slen);
}
