/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hxu <hxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 16:40:52 by hxu               #+#    #+#             */
/*   Updated: 2018/09/25 22:43:09 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	line(int w, char start, char middle, char end)
{
	int i;
	int r;

	i = 1;
	r = 1;
	while (i <= w)
	{
		if (i == 1)
			ft_putchar(start);
		while (r < (w - 1))
		{
			ft_putchar(middle);
			r++;
		}
		if (i == w && w != 1)
			ft_putchar(end);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	char start;
	char end;
	char h_body;
	char v_body;
	int r;

	start = 'A';
	end = 'C';
	h_body = 'B';
	v_body = 'B';
	r = 1;
	if (y >= 1)
	{
		line(x, start, h_body, end);
		while (r < (y - 1))
		{
			line(x, v_body, ' ', v_body);
			r++;
		}
		if (y != 1)
			line(x, start, h_body, end);
	}
}
