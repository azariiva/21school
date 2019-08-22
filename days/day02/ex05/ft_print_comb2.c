/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 17:30:21 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/01 20:25:39 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_number(char number)
{
	ft_putchar(number / 10 + '0');
	ft_putchar(number % 10 + '0');
}

void	ft_print_comb2(void)
{
	char first_number;
	char second_number;

	fist_number = 0;
	while (first_number <= 98)
	{
		second_number = first_number + 1;
		while (second_number <= 99)
		{
			ft_print_number(first_number);
			ft_putchar(' ');
			ft_print_number(second_number);
			if (first_number != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			++second_number;
		}
		++first_number;
	}
	ft_putchar('\n');
}
