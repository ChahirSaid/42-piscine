/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouz <yel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 07:05:21 by yel-bouz@st       #+#    #+#             */
/*   Updated: 2024/09/04 22:55:05 by schahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	isnum(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '+')
		i = i + 1;
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_atoi(char s[])
{
	int		i;
	int		sign;
	int		result;

	i = 0;
	sign = 1;
	result = 0;
	if (s[i] == '+')
		i = i + 1;
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + s[i] - '0';
		i = i + 1;
	}
	return (result * sign);
}

int	main(int ac, char *av[])
{
	int	x;
	int	y;
	int	max;

	max = 2147483647;
	if (ac == 3 && (isnum(av[1]) && isnum(av[2])))
	{
		x = ft_atoi(av[1]);
		y = ft_atoi(av[2]);
		if (x <= 0 || y <= 0 || x > max || y > max)
		{
			write(STDERR_FILENO, "invalid input", 13);
		}
		else
			rush(x, y);
	}
	else
		write(STDERR_FILENO, "invalid arguments", 17);
}
