/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanlon <dhanlon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:48:45 by dhanlon           #+#    #+#             */
/*   Updated: 2025/09/17 16:56:24 by dhanlon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*mem_s;
	unsigned char	mem_c;
	int				i;

	mem_s = (unsigned char *)s;
	mem_c = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (mem_s[i] == mem_c)
			return (&mem_s[i]);
		i++;
	}
	if (mem_s[i] == mem_c)
		return (&mem_s[i]);
	else
		return (NULL);
}
