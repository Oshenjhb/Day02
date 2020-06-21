/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamfer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 16:43:36 by okamfer           #+#    #+#             */
/*   Updated: 2020/06/19 17:12:36 by okamfer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_alphabet(void)
{
	char letter;

	letter = 'a' ;
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}

int main(void) 
{
	ft_print_alphabet();
	ft_putchar('\n');
	return (0);
}
