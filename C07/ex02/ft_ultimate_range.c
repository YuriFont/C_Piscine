/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:34:21 by yufonten          #+#    #+#             */
/*   Updated: 2023/09/10 13:48:55 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*d;
	int	i;
	int	s;

	i = 0;
	s = min;
	if (min > max || min == max)
	{
		*range = NULL;
		return (0);
	}
	d = (int *)malloc(sizeof(int) * (max - min));
	if (!d)
	{
		*range = NULL;
		return (0);
	}
	while (i < (max - min))
	{
		d[i++] = s++;
	}
	*range = d;
	return (max - min);
}
