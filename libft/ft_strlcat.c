/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 19:37:35 by ifreire           #+#    #+#             */
/*   Updated: 2026/05/27 19:37:38 by ifreire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* Appends the source string to the destination string, with a size limit,
** and ensures null termination. Returns the total length of the concatenated
** string. */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (len_src + size);
	while (src[i] != '\0' && (len_dst + i) < (size - 1))
	{
		dst[i + len_dst] = src[i];
		i++;
	}
	dst[i + len_dst] = '\0';
	return (len_src + len_dst);
}