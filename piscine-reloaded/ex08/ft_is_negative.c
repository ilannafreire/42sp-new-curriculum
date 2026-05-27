/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 11:28:26 by ifreire           #+#    #+#             */
/*   Updated: 2026/05/16 11:35:59 by ifreire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar ('N');
	else
		ft_putchar ('P');
}

// int	main(void)
// {
// 	ft_is_negative(-5);
// 	ft_putchar('\n');
// 	ft_is_negative(10);
// 	ft_putchar('\n');
// 	ft_is_negative(0);
// 	ft_putchar('\n');
// 	return (0);
// }
