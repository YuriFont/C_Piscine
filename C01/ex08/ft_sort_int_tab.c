/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:37:32 by yufonten          #+#    #+#             */
/*   Updated: 2023/09/03 15:44:30 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			aux = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = aux;
			i = 0;
			continue ;
		}
		i++;
	}
}
