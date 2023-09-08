/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 02:31:51 by yufonten          #+#    #+#             */
/*   Updated: 2023/09/08 03:50:32 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_str_tab(char **str, int size)
{
	int		i;
	char	*temp;

	i = 0;
	while (i < size - 1)
	{
		if (ft_strcmp(str[i], str[i + 1]) > 0)
		{
			temp = str[i];
			str[i] = str[i + 1];
			str[i + 1] = temp;
			i = 0;
			continue ;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac)
	{
		ft_sort_str_tab(av, ac);
		while (i < ac)
		{
			ft_putstr(av[i]);
			i++;
		}
	}
	return (0);
}
