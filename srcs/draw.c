/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuselet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 14:11:50 by bmuselet          #+#    #+#             */
/*   Updated: 2018/01/30 14:11:51 by bmuselet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

void	draw(t_mlx *mlx , int x, int y)
{
	int i;

	i = x + (y * WIN_WIDTH);
	mlx->img->str_img[i] = ORANGE;
}