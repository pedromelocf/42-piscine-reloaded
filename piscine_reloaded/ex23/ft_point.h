/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-melo <pedro-melo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 17:41:53 by pedro-melo        #+#    #+#             */
/*   Updated: 2023/07/21 19:19:31 by pedro-melo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
#define FT_POINT_H

struct t_point {
	int x; 
	int y;
};

extern void set_point(struct t_point *point);

#endif