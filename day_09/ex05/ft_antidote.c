/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 14:31:13 by hirenpat          #+#    #+#             */
/*   Updated: 2018/09/28 14:33:37 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
  if ((j < k && j > i) || (j > k && j < i))
		return (j);
	if ((i < k && i > j) || (i > k && i < j))
		return (i);
	return (k);
}