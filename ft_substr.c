/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanlon <dhanlon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:50:01 by dhanlon           #+#    #+#             */
/*   Updated: 2025/09/15 11:50:01 by dhanlon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	s_size;
	size_t	i;

	if (!s)
		return (NULL);
	s_size = ft_strlen(s);
	if (start >= s_size)
	{
		dest = (char *) malloc(sizeof (char));
		dest[0] = '\0';
		return (dest);
	}
	dest = (char *) malloc(sizeof (char) * len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
//Use ft_memcpy to copy s into dest.
