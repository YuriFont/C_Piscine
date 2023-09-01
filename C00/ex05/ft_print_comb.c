/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 09:58:41 by yufonten          #+#    #+#             */
/*   Updated: 2023/09/01 10:27:12 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	n;
	char	n2;
	char	n3;

	n = '0';
	while (n < '8')
	{
		n2 = n + 1;
		while (n2 < '9')
		{
			n3 = n2 + 1;
			while (n3 <= '9')
			{
				ft_putchar(n);
				ft_putchar(n2);
				ft_putchar(n3);
				if (n != '7')
					write(1, ", ", 2);
				n3++;
			}
			n2++;
		}
		n++;
	}
}
