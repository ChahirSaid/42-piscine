/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:03:06 by schahir           #+#    #+#             */
/*   Updated: 2024/09/11 15:29:31 by schahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	if (min >= max)
		return (NULL);
	range = malloc((max - min) * sizeof(int));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
/*#include<stdio.h>
int main(void)
{
    int min = 5;
    int max = 10;
    int *range;
    int i;

    range = ft_range(min, max);

	while (i < min)
    {
        printf("%d ", range[i]);
		i++;
    }
    free(range);
}*/
