/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanlon <dhanlon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:47:56 by dhanlon           #+#    #+#             */
/*   Updated: 2025/09/17 17:07:53 by dhanlon          ###   ########.fr       */
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
	{
		mem_s[i] = mem_c;
		i++;
	}
	return (s);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	nmemb_size;
	void	*p;

	nmemb_size = nmemb * size;
	p = malloc(nmemb_size);
	if (!p)
		return (NULL);
	ft_memset(p, 0, nmemb_size);
	return (p);
}
