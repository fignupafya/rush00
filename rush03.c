/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:53:30 by acigerim          #+#    #+#             */
/*   Updated: 2022/08/28 11:53:35 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	s;
	int	h;

	h = 1;
	while (h <= y)
	{
		s = 1;
		while (s <= x)
		{
			if ((h == 1 || h == y) && (s != 1 && s != x))
				ft_putchar('B');
			else if ((h != 1 && h != y) && (s == 1 || s == x))
				ft_putchar('B');
			else if ((s == 1 && h == 1) || (s == 1 && h == y))
				ft_putchar('A');
			else if ((s == x && h == 1) || (s == x && h == y))
				ft_putchar('C');
			else
				ft_putchar(' ');
			s++;
		}
		ft_putchar('\n');
		h++;
	}
}	
