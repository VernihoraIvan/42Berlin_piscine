/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iverniho <iverniho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:15:15 by iverniho          #+#    #+#             */
/*   Updated: 2023/10/16 17:06:43 by iverniho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, str + i, 1);
		i++;
	}
	write (1, "\n", 1);
}

void	fstrswp(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while ((s1[count] != '\0' && s2[count] != '\0') && (s1[count] == s2[count]))
	{
		count ++;
	}
	if (s1[count] == s2[count])
	{
		return (0);
	}
	else
	{
		return (s1[count] - s2[count]);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				fstrswp(&argv[i], &argv[i + 1]);
				i = 0;
			}
			i++;
		}
	}
	i = 1;
	while (i <= argc - 1)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
