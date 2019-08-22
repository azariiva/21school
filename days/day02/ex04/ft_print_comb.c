/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 17:13:40 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/01 20:36:31 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_digits(char digit[0], char digit[1], char digit[2])
{
	ft_putchar(digit[0]);
	ft_putchar(digit[1]);
	ft_putchar(digit[2]);
}

void	ft_print_comb(void)
{
	char digit[3];

	digit[0] = '0';
	while (digit[0] <= '7')
	{
		second_digit = first_digit + 1;
		while (digit[1] <= '8')
		{
			digit[2] = digit[1] + 1;
			while (digit[2] <= '9')
			{
				ft_print_digits(digit[0], digit[1], digit[2]);
				if (digit[2] != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				++digit[2];
			}
			++digit[1];
		}
		++digit[0];
	}
	ft_putchar('\n');
}
