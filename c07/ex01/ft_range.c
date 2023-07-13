/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:24:16 by jlarrieu          #+#    #+#             */
/*   Updated: 2022/08/31 19:25:27 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*tab;

	i = -1;
	size = max - min;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (NULL);
	while (++i < size)
		tab[i] = min + i;
	return (tab);
}
