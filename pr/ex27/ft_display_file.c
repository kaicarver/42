/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:46:48 by rcarver           #+#    #+#             */
/*   Updated: 2018/11/08 12:04:37 by rcarver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#define BUFSIZE 10
#define MAXSTR 100

void	ft_putstr2(int fd, char *str, int len)
{
	while (*str && len-- > 0)
		write(fd, str++, 1);
}

int		main(int argc, char **argv)
{
	int		fd;
	char	buf[BUFSIZE];
	ssize_t	size;

	if (argc < 2)
		ft_putstr2(2, "File name missing.\n", MAXSTR);
	else if (argc > 2)
		ft_putstr2(2, "Too many arguments.\n", MAXSTR);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
		{
			ft_putstr2(2, "Can't open file.\n", MAXSTR);
			return (0);
		}
		size = 1;
		while (size > 0)
		{
			size = read(fd, buf, BUFSIZE);
			ft_putstr2(1, buf, size);
		}
		close(fd);
	}
	return (0);
}
