/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:33:45 by rcarver           #+#    #+#             */
/*   Updated: 2018/11/07 15:53:11 by rcarver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	unsigned char *u1;
	unsigned char *u2;

	u1 = (unsigned char *)s1;
	u2 = (unsigned char *)s2;
	while (*u1 - *u2 == 0 && *u1)
	{
		u1++;
		u2++;
	}
	return (*u1 - *u2);
}

void	ft_sort(int argc, char **argv)
{
	int		i;
	char	*t;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			t = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = t;
			i = 0;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	char	*s;

	ft_sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		s = argv[i];
		while (*s)
			ft_putchar(*s++);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
