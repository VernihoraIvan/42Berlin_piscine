/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iverniho <iverniho@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:59:29 by iverniho          #+#    #+#             */
/*   Updated: 2023/10/10 10:59:43 by iverniho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
