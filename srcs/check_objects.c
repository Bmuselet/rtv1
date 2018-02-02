/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_objects.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuselet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 14:44:47 by bmuselet          #+#    #+#             */
/*   Updated: 2018/02/01 14:44:49 by bmuselet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

int				check_sphere(t_map *map, t_object_list *new_elem, char *str)
{
	int		j;
	int		c;

	j = 0;
	if ((c = count_int(str)) != 4)
		return (false);
	new_elem->sphere.position = assign_vectors(str, &j, new_elem->sphere.position);
	while (str[j] < '0' || str[j] > '9')
		j++;
	new_elem->sphere.radius = atoi_custom(str, &j);
	while (str[j] < '0' || str[j] > '9')
		j++;
	return (true);
}