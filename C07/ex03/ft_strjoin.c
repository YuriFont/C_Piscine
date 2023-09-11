/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:51:00 by yufonten          #+#    #+#             */
/*   Updated: 2023/09/11 14:10:17 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

int	ft_final_length(char **strs, int size, char *sep)
{
	int	f_size;
	int	i;

	i = 0;
	f_size = 0;
	while (i < size)
	{
		f_size += ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	f_size -= ft_strlen(sep);
	return (f_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		f_size;
	char	*dest;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	i = 1;
	f_size = ft_final_length(strs, size, sep);
	dest = (char *)malloc(sizeof(char) * (f_size + 1));
	if (!dest)
		return (NULL);
	ft_strcpy(dest, strs[0]);
	while (i < size)
	{
		if (i < size)
			ft_strcat(dest, sep);
		ft_strcat(dest, strs[i]);
		i++;
	}
	return (dest);
}
