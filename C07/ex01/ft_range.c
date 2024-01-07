/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iverniho <iverniho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:00:14 by iverniho          #+#    #+#             */
/*   Updated: 2023/10/19 16:17:31 by iverniho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*res;

	i = 0;
	if (min >= max)
		return (NULL);
	res = (int *)malloc((max - min) * sizeof(int));
	if (res == NULL)
		return (0);
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}

// #include <stdio.h>
// void print_array(int *arr, int l)
// {
//     int i;
//     i = 0;
//     while(i < l)
//     {
//         printf( "%d", arr[i]);
//         i++;
//     }
//     printf( "\n");
// }
// int main(void)
// {
//     int max;
//     int min;
//     int *dest;
//     max = 9;
//     min = -2;
//     dest = (int *)malloc((max-min) * sizeof(int));
//     if (dest == 0)
//         return (0);
//     dest =(ft_range(min, max));
//     print_array(dest,(max-min) );
//     return (0);
// }