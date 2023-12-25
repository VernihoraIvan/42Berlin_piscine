/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iverniho <iverniho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:36:44 by iverniho          #+#    #+#             */
/*   Updated: 2023/10/12 20:45:16 by iverniho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_negative(char *str)
{
	int	i;
	int	c;
	int	r;

	i = 0;
	c = 0;
	r = 1;
	while (str[i])
	{
		if (str[i] == '-')
			c++;
		if (str[i] >= '0' && str[i] <= '9')
			break ;
		i++;
	}
	if (c % 2 != 0)
		r = -1;
	return (r);
}

int	ft_atoi(char *str)
{
	int	res; 
	int	i;
	int	s;

	s = 0;
	res = 0; 
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	if ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		return (res);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * is_negative(str));
}
