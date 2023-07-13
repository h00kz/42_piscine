/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:24:08 by jlarrieu          #+#    #+#             */
/*   Updated: 2022/08/31 22:17:26 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

void	ft_strcat_strs(int size, char *str, char **strs, char *sep)
{
	int	i;

	i = -1;
	while (++i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		strs_len;
	int		sep_len;
	char	*str;

	i = -1;
	sep_len = ft_strlen(sep);
	while (++i < size - 1)
		strs_len += ft_strlen(strs[i]);
	if (size <= 0)
	{
		str = malloc(sizeof(char) * 1);
		str[0] = '\0';
		return (str);
	}
	str = malloc(sizeof(char) * (strs_len + (sep_len * (size - 1)) + 1));
	if (!str)
		return (NULL);
	ft_strcat_strs(size, str, strs, sep);
	str[ft_strlen(str)] = '\0';
	return (str);
}
