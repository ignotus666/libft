/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanlon <dhanlon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:48:39 by dhanlon           #+#    #+#             */
/*   Updated: 2025/09/15 11:48:39 by dhanlon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*mem_s;
	unsigned char	mem_c;
	size_t			i;

	mem_s = (unsigned char *)s;
	mem_c = (unsigned char)c;
	i = 0;
	while (i < n)
		mem_s[i] = mem_c;
	return (s);
}
