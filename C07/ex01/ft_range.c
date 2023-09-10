/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 21:42:55 by yufonten          #+#    #+#             */
/*   Updated: 2023/09/09 21:59:59 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*t;
	int	*d;
	int	i;

	i = 0;
	if (min > max || min == max)
		return (NULL);
	d = ((t = (int *)malloc(sizeof(int) * (max - min))));
	if (!d)
		return (NULL);
	while (i < (max - min))
	{
		d[i] = min;
		i++;
		min++;
	}
	return (d);
}
