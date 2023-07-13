/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:36:10 by jlarrieu          #+#    #+#             */
/*   Updated: 2022/08/17 22:46:07 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	print(int f, int s)
{
	if (f < 10)
		ft_putchar('0');
	ft_putnbr(f);
	ft_putchar(' ');
	if (s < 10)
		ft_putchar('0');
	ft_putnbr(s);
	if (!(f == 98 && s == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int		first;
	int		second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			print(first, second);
			second++;
		}
		first++;
	}
}
