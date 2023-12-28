/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iverniho <iverniho@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:47:04 by iverniho          #+#    #+#             */
/*   Updated: 2023/10/13 12:14:34 by iverniho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	i2;

	i2 = 0;
	i = 0;
	if (argc != 1)
	{
		while (argv[i] != NULL)
		{
			i++;
		}
		i--;
		while (i > 0)
		{
			i2 = 0;
			while (argv[i][i2] != '\0')
			{
				write(1, &argv[i][i2], 1);
				i2++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
