/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viny <viny@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:37:36 by vnieto-j          #+#    #+#             */
/*   Updated: 2023/07/21 12:38:09 by viny             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dest[i] && i < size)
	{
		i++;
		j++;
	}
	k = 0;
	while (i < size - 1 && src[k] != '\0')
		dest[i++] = src[k++];
	if (j < size)
		dest[i] = '\0';
	return (j + ft_strlen(src));
}
