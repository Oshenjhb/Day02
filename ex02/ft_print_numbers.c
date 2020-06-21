7/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamfer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 17:45:13 by okamfer           #+#    #+#             */
/*   Updated: 2020/06/21 10:26:02 by okamfer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
void ft_print_numbers(void)
{
	int digit;
	digit = '0';

	while (digit <= '9')
	{
		ft_putchar(digit);
		digit++;
	}
}

int main()
{
	ft_print_numbers();
	ft_putchar('\n');
	return (0);
}
