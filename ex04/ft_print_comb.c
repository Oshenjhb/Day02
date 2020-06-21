/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamfer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 11:33:08 by okamfer           #+#    #+#             */
/*   Updated: 2020/06/21 15:01:07 by okamfer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
    char i; 

	int a;
	int b;
	int c;
	for(i = '0', i<='9', ++i);
	{
		for(a = '0', a<='9', ++a);
		{
			ft_putchar(a);
			ft_putchar(b);
			ft_putchar(c);
		}
	}
}

int main()
{
	ft_print_comb();
	ft_putchar('\n');
	return (0);
}







	
