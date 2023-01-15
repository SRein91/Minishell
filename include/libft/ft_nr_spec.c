/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_num_spec_char.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreinhol <sreinhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:42:35 by sreinhol          #+#    #+#             */
/*   Updated: 2022/03/09 20:15:01 by sreinhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nr_spec(int c)
{
	return ((c > 32 && c < 65) || (c > 90 && c < 97) || (c > 122 && c < 127));
}