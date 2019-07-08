/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <charles.cabergs@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 08:19:02 by cacharle          #+#    #+#             */
/*   Updated: 2019/07/08 11:00:55 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ex00/ft_strdup.c"
#include "ex01/ft_range.c"
#include "ex02/ft_ultimate_range.c"
#include "ex03/ft_strjoin.c"
/*#include "ex04/ft_strdup.c"*/
/*#include "ex05/ft_strdup.c"*/

int main()
{
	char *s = "bonjour";
	char *mydup = ft_strdup(s);
	char *stdup = strdup(s);

	printf("%s\n", mydup);
	printf("%s\n", stdup);
	free(mydup);
	free(stdup);

	printf("---------------\n");
	int *r = ft_range(-3, 5);
	if (r)
		for (int i = 0; i < 10; i++)
			printf("%d ", r[i]);
	printf("\n ");
	free(r);

	printf("---------------\n");
	int *rult;
	int len = ft_ultimate_range(&rult, -4, 15);
	printf("len(%d): ", len);
	for (int i = 0; i < len; i++)
		printf("%d ", rult[i]);
	printf("\n ");

	printf("---------------\n");
	char *strs[] = {"bonjour", "je", "suis", "charle"};
	char *sep = ", ";
	int size = 4;
	char *join;
	/*printf("%d\n", cummulative_strlen(size, strs));*/
	join = ft_strjoin(size, strs, sep);
	printf("%s\n", join);
	free(join);

	return 0;
}