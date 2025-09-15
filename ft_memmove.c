/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanlon <dhanlon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:48:33 by dhanlon           #+#    #+#             */
/*   Updated: 2025/09/15 11:48:34 by dhanlon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*mem_dest;
	unsigned char	*mem_src;
	size_t			i;

	if ((!dest || !src) && n > 0)
		return (NULL);
	if (dest == src)
		return (dest);
	mem_dest = (unsigned char *)dest;
	mem_src = (unsigned char *)src;
	if (dest < src)
	{
		i = -1;
		while (++i < n)
			mem_dest[i] = mem_src[i];
	}
	if (dest > src)
	{
		i = n;
		while (--i >= 0)
			mem_dest[i] = mem_src[i];
	}
	return (dest);
}
