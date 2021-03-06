/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <charles.cabergs@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:45:20 by cacharle          #+#    #+#             */
/*   Updated: 2019/07/16 14:10:58 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "include.h"

int	main(int argc, char **argv)
{
	int		i;
	int		status;

	status = 0;
	if (argc == 1)
	{
		read_stdin();
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		if (print_file(argv[i]) == -1)
		{
			handle_error(argv[0], argv[i]);
			status = 1;
		}
		i++;
	}
	return (status);
}
