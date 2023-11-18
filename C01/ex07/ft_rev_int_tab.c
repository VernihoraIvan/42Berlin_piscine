/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iverniho <iverniho@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:26:45 by iverniho          #+#    #+#             */
/*   Updated: 2023/10/02 15:27:07 by iverniho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	end;
	int	begin;
	int	temp;

	begin = 0;
	end = size - 1;
	while (begin < end)
	{
		temp = tab[end];
		tab[end] = tab[begin];
		tab[begin] = temp;
		begin++;
		end--;
	}
}
