/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iverniho <iverniho@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:58:12 by iverniho          #+#    #+#             */
/*   Updated: 2023/10/06 19:33:37 by iverniho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	if (to_find[i2] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + i2] != '\0' && str[i + i2] == to_find[i2])
			i2++;
		if (to_find[i2] == '\0')
			return (&str[i]);
		i2 = 0;
		i++;
	}
	return (0);
}
