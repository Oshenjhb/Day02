/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamfer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 17:07:48 by okamfer           #+#    #+#             */
/*   Updated: 2020/06/19 17:37:00 by okamfer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
	char letter;

	letter = 'z' ;
	while (letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}
}

int main(void)
{
	ft_print_reverse_alphabet();
	ft_putchar('\n');
	return (0);
}
