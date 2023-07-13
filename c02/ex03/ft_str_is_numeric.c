/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 00:43:10 by jlarrieu          #+#    #+#             */
/*   Updated: 2022/08/21 10:25:45 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_num(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!ft_is_num(str[i]))
			return (0);
		i++;
	}
	return (1);
}
