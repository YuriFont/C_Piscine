/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:02:05 by yufonten          #+#    #+#             */
/*   Updated: 2023/09/05 20:22:51 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	test;

	i = 0;
	test = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) && test == 1)
		{
			str[i] = str[i] - 32;
			test = 0;
		}
		else if ((str[i] >= 48 && str[i] <= 57) && test == 1)
			test = 0;
		else if (!((str[i] >= 97 && str[i] <= 122) || 
				(str[i] >= 48 && str[i] <= 57)))
			test = 1;
		i++;
	}
	return (str);
}
