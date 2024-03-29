/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_del.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochoi <yochoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 06:58:36 by yochoi            #+#    #+#             */
/*   Updated: 2020/05/28 08:41:45 by yochoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function free a two-dimensional array.
*/

void	ft_split_del(char **ptr)
{
	int			i;

	i = 0;
	while (ptr[i])
		free(ptr[i++]);
	free(ptr);
}
