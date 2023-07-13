/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 09:42:33 by jlarrieu          #+#    #+#             */
/*   Updated: 2022/08/29 12:38:28 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (ft_is_space(str[i]))
		i++;
	i--;
	while (str[++i] == '-' || str[i] == '+')
	{
		if (str[i] == '+')
			continue ;
		sign *= -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - '0');
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (res * sign);
	return (0);
}
