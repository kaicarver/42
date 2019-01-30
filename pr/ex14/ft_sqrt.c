/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:11:23 by rcarver           #+#    #+#             */
/*   Updated: 2018/11/07 13:16:19 by rcarver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int ret;

	ret = 1;
	while (ret <= nb / 2)
	{
		if (ret * ret == nb)
			break ;
		ret++;
	}
	if (ret > nb / 2)
		ret = 0;
	return (ret);
}
