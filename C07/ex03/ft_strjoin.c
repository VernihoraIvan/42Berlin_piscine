/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iverniho <iverniho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:13:07 by iverniho          #+#    #+#             */
/*   Updated: 2023/10/19 16:34:31 by iverniho         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[i2] != '\0')
	{
		dest[i] = src[i2];
		i++;
		i2++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		length;
	char	*res;

	i = 0;
	length = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		i++;
	}
	length += ((size - 1) * ft_strlen(sep));
	res = (char *)malloc(sizeof(char) * (length + 1));
	if (res == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if ((i + 1) < size)
			ft_strcat(res, sep);
		i++;
	}
	return (res);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	**strs;
// 	char	*separator;
// 	char	*result;
// 	int	size;
// 	size = 3;
// 	strs = (char **)malloc(3 * sizeof(char *));
// 	strs[0] = "Dogdays";
// 	strs[1] = "are";
// 	strs[2] = "over";
// 	separator = " ";
// 	result = ft_strjoin(size, strs, separator);
// 	printf("%s$\n", result);
// 	free(result);
// }
