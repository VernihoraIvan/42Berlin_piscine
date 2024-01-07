/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iverniho <iverniho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:40:57 by iverniho          #+#    #+#             */
/*   Updated: 2023/10/19 16:27:35 by iverniho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*res;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	res = (int *)malloc(size * sizeof(int));
	if (res == NULL)
		return (-1);
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	*range = res;
	return (size);
}

// void print_int_arr(int *arr, int r)
// {
//     int i;
//     char    b;
//     i = 0;
//     while(i < r)
//     {
//         b = arr[i]+'0';
//         write(1, &b, 1);
//         write(1, " ", 1);
//         i++;
//     }
// }
// print_int_arr(*range, size);//example of usage inside ft_ultimate_range
// #include <unistd.h>
// int main(void)
// {
//     int *dest;
//     int a;
//     int max = 9;
//     int min = 5;
//     dest = malloc((max-min) * sizeof(int));
//     a =(ft_ultimate_range(&dest, min, max));
//     return (0);
// }