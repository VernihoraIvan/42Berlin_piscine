/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iverniho <iverniho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:22:40 by iverniho          #+#    #+#             */
/*   Updated: 2023/10/18 13:11:47 by iverniho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	res = 1;
	i = nb;
	if (nb < 0)
		return (0);
	while (i > 0)
	{
		res *= i;
		i--;
	}
	return (res);
}

// #include <stdio.h>
// int main()
// {
//   int res;
//   res = ft_iterative_factorial(0);
//     printf("%d", res);
//   return (0);
// }