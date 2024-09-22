/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouz@student.1337.ma <yel-bouz>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 07:05:57 by yel-bouz@st       #+#    #+#             */
/*   Updated: 2024/09/01 07:09:34 by yel-bouz@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	prin(int x, char borders, char center)
{
	int	i;

	i = 1;
	while (i >= 1 && i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar(borders);
		}
		else
			ft_putchar(center);
		i = i + 1;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x == 0 || y == 0)
	{
		return ;
	}
	while (i <= y)
	{
		if (i == 1 || i == y)
		{
			prin(x, 'o', '-');
		}
		else
			prin(x, '|', ' ');
		i = i + 1;
	}
}
