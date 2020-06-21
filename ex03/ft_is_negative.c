/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamfer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 11:17:35 by okamfer           #+#    #+#             */
/*   Updated: 2020/06/21 15:46:51 by okamfer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
void ft_is_negative(int n)
{
	if(n >= 0)
		ft_putchar('P');
	else
		ft_putchar('N');
}

int main(void)
{
	ft_is_negative(-5);
	ft_putchar('\n');
	return (0);
}
	


