char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		k = 0;
		while (big[i + k] == little[k] && little[k] != '\0' && i + k < len)
			k++;
		if (little[k] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
