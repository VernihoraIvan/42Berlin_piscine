/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iverniho <iverniho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:01:26 by iverniho          #+#    #+#             */
/*   Updated: 2023/10/19 16:33:59 by iverniho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	res;

	if (!str)
		return (0);
	res = 0;
	while (str[res])
		res++;
	return (res);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*res;

	i = 0;
	size = ft_strlen(src);
	res = (char *)malloc((size + 1) * sizeof(char));
	if (!res)
		return (0);
	while (src[i] != '\0')
	{
		res[i] = src[i];
		i++;
	}
	res[i] = 0;
	return (res);
}

// #include <stdio.h>
// int main(void)
// {
//     char    *str = "asassadsdad";
//     char    *dest = ft_strdup(str);
//     printf("This is dest: %s", dest);
//     return (0);
// }