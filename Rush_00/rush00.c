/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcakmak <zcakmak@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 03:30:45 by zcakmak           #+#    #+#             */
/*   Updated: 2023/02/05 04:36:09 by zcakmak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_letter(int x, char first_l, char middle_l, char last_l)
{
	int	counter;

	counter = 1;
	while (counter <= x)
	{
		if (counter == 1)
			ft_putchar(first_l);
		else if (counter == x)
			ft_putchar(last_l);
		else
			ft_putchar(middle_l);
		counter++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	l_counter;

	l_counter = 1;
	if (x >= 1 && y >= 1)
	{
		while (l_counter <= y)
		{
			if (l_counter == 1)
				ft_letter(x, 'o', '-', 'o');
			else if (l_counter == y)
				ft_letter(x, 'o', '-', 'o');
			else
				ft_letter(x, '|', ' ', '|');
			l_counter++;
		}
	}
}