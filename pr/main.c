/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 20:30:25 by rcarver           #+#    #+#             */
/*   Updated: 2018/11/08 15:36:11 by rcarver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_iterative_factorial(int nb);
int		ft_recursive_factorial(int nb);
char    *ft_strdup(char *src);

int		main(void)
{
	int		n;
	char	*p1;

	p1 = "What the ...";
	printf("strdup(<%s>)=<%s>\n", p1, strdup(p1));
	printf("ft_strdup(<%s>)=<%s>\n", p1, ft_strdup(p1));
	p1 = "";
	printf("strdup(<%s>)=<%s>\n", p1, strdup(p1));
	printf("ft_strdup(<%s>)=<%s>\n", p1, ft_strdup(p1));
	return (0);
	n = -1; printf("%d: %d\n", n, ft_iterative_factorial(n));
	n = -1; printf("%d: %d\n", n, ft_recursive_factorial(n));
	n = 0;  printf("%d: %d\n", n, ft_iterative_factorial(n));
	n = 0;  printf("%d: %d\n", n, ft_recursive_factorial(n));
	n = 1;  printf("%d: %d\n", n, ft_iterative_factorial(n));
	n = 1;  printf("%d: %d\n", n, ft_recursive_factorial(n));
	n = 2;  printf("%d: %d\n", n, ft_iterative_factorial(n));
	n = 2;  printf("%d: %d\n", n, ft_recursive_factorial(n));
	n = 3;  printf("%d: %d\n", n, ft_iterative_factorial(n));
	n = 3;  printf("%d: %d\n", n, ft_recursive_factorial(n));
	n = 4;  printf("%d: %d\n", n, ft_iterative_factorial(n));
	n = 4;  printf("%d: %d\n", n, ft_recursive_factorial(n));
	return (0);
}
