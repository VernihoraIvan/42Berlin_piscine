/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iverniho <iverniho@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:26:11 by iverniho          #+#    #+#             */
/*   Updated: 2023/10/02 15:26:26 by iverniho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0') 
	{
		index++;
	}
	return (index);
}

//int main(void)
//{
//	char c;
//  char *ptr = "Hello";
//    c = ft_strlen(ptr) +48;
//    write(1, &c, 2);
//
//}
