/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 22:36:58 by cacharle          #+#    #+#             */
/*   Updated: 2019/07/02 22:40:46 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char number;

	number = '0';
	while (number != '9' + 1)
	{
		write(1, &number, 1);
		number++;
	}
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
