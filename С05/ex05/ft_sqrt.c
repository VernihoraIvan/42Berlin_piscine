/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iverniho <iverniho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:34:39 by iverniho          #+#    #+#             */
/*   Updated: 2023/10/18 17:12:12 by iverniho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i * i < nb && i <= 46340)
	{
		i++;
	}
	if (i * i == nb)
		return (i);
	else <= nb / i
		return (0);
}

// #include <stdio.h>
// int main()
// {
//   int res;
//   res = ft_sqrt(2147483647);
//   printf("%d", res);
//   return (0);
// }