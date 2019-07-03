/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 17:58:34 by hibenfet          #+#    #+#             */
/*   Updated: 2019/07/03 18:11:06 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_alphabet(void)
{
	char a;
	a = 'z';
	while(a >= 'a')
	{
		write(1, &a, 1);
		a--;
	}
}

int main()
{
	    ft_print_alphabet();
}
