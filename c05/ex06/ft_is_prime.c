/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 02:38:19 by facetint          #+#    #+#             */
/*   Updated: 2023/02/19 01:43:33 by facetint         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	r;

	r = 2;
	if (nb < 2)
		return (0);
	while (r <= nb / r)
	{
		if (nb % r == 0)
			return (0);
		r++;
	}
	return (1);
}