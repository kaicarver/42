/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:08:40 by rcarver           #+#    #+#             */
/*   Updated: 2018/11/08 15:35:48 by rcarver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*tgt;
	char	*temp;
	size_t	size;

	if (src == NULL)
		return (NULL);
	size = 0;
	temp = src;
	while (*temp++)
		size++;
	tgt = (char *)malloc((size + 1) * sizeof(char));
	if (tgt == NULL)
		return (NULL);
	temp = tgt;
	while (*src)
		*temp++ = *src++;
	*temp = 0;
	return (tgt);
}
