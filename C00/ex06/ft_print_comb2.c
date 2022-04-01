/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdemir <berdemir@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 21:18:43 by berdemir          #+#    #+#             */
/*   Updated: 2022/03/26 21:18:46 by berdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_int(int n)
{
	n += 48;
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_put_int(a / 10);
			ft_put_int(a % 10);
			write(1, " ", 1);
			ft_put_int(b / 10);
			ft_put_int(b % 10);
			if (a != 98 || b != 99)
				write (1, ", ", 2);
			b++;
		}
		a++;
	}
}
