/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:29:20 by yufonten          #+#    #+#             */
/*   Updated: 2023/09/03 15:36:32 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < size - 1)
	{
		aux = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = aux;
		i++;
		size--; 
	}
}
