/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:31:07 by jlarrieu          #+#    #+#             */
/*   Updated: 2022/08/20 16:58:07 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_is_num(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_is_alphanum(char c)
{
	return (ft_is_alpha(c) || ft_is_num(c));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += ('a' - 'A');
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (!(ft_is_alphanum(str[i - 1])) && ft_is_lowercase(str[i]))
		{
			str[i] -= ('a' - 'A');
			i++;
		}
		i++;
	}
	return (str);
}
