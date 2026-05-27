/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 20:10:23 by ifreire           #+#    #+#             */
/*   Updated: 2026/05/19 07:11:49 by ifreire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	div;
// 	int	mod;

// 	ft_div_mod(10, 3, &div, &mod);
// 	printf("Divisão: %d\n", div);
// 	printf("Resto: %d\n", mod);
// 	return (0);
// }
