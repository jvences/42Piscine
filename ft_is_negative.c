/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catperei <catperei@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:00:39 by catperei          #+#    #+#             */
/*   Updated: 2021/01/11 14:05:57 by catperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	int n = 0;

	if (int n < 0)
	{
		ft_putchar('N');
	}
	if (int n >= 0)
	{ 
		ft_putchar('P');
	}
}

