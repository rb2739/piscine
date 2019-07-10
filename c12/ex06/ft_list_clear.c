/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <charles.cabergs@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 17:53:02 by cacharle          #+#    #+#             */
/*   Updated: 2019/07/09 18:02:09 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	tmp;

	if (!begin_list)
		return ;
	while (begin_list->next)
	{
		free_fct(begin_list->data);
		tmp = begin_list->next;
		free(begin_list);
		begin_list = tmp;
	}
}
