/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catperei <catperei@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 13:57:52 by catperei          #+#    #+#             */
/*   Updated: 2021/01/11 13:59:47 by catperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	 ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_numbers(void)
{
	char x = '0';
	
	while (x <= '9')
	{ 
		ft_putchar(char x);
		x++;
	}
}

