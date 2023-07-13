/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:22:38 by jlarrieu          #+#    #+#             */
/*   Updated: 2022/08/24 10:52:25 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && (s1[i] && s2[i]) && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int				i;
	unsigned int	to_find_len;

	i = 0;
	to_find_len = ft_strlen(to_find);
	if (!(*to_find))
		return (str);
	while (str[i])
	{
		if (!ft_strncmp(&str[i], to_find, to_find_len))
			return (&str[i]);
		i++;
	}
	return (0);
}
