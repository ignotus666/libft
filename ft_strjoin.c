size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	size_t	j;
	char	*dest;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dest = (char *) malloc(sizeof (char) * (s1_len + s2_len + 1));
	if (!dest)
		return (NULL);
	i = -1;
	while (++i < s1_len)
		dest[i] = s1[i];
	j = -1;
	while (++j < s2_len)
	{
		dest[i] = s2[j];
		i++;
	}
	dest[s1_len + s2_len] = '\0';
	return (dest);
}
//Use ft_memcpy to copy strings into dest.
