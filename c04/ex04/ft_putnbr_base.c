/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 09:42:47 by jlarrieu          #+#    #+#             */
/*   Updated: 2022/08/25 09:40:32 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;
	int	base_len;

	i = -1;
	j = 0;
	base_len = ft_strlen(base);
	if (base_len < 2)
		return (0);
	while (base[++i])
		if ((base[i] == '-' || base[i] == '+'))
			return (0);
	i = -1;
	while (base[++i])
	{
		j = i;
		while (base[++j])
			if (base[i] == base[j])
				return (0);
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			base_len;
	long int	res;

	res = (long int)nbr;
	base_len = ft_strlen(base);
	if (!ft_check_base(base))
		return ;
	if (res < 0)
	{
		ft_putchar('-');
		res = -res;
	}
	if (res >= base_len)
		ft_putnbr_base(res / base_len, base);
	ft_putchar(base[res % base_len]);
}
