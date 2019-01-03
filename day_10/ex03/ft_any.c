/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 21:40:32 by hirenpat          #+#    #+#             */
/*   Updated: 2018/10/02 21:57:20 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int index;

	index = 0;
	while (tab[index] != 0)
	{
		if (f(tab[index]))
			return (1);
		index++;
	}
	return (0);
}