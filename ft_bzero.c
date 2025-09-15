void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*mem_s;

	mem_s = (unsigned char *)s;
	i = -1;
	while (++i < n)
		mem_s[i] = '\0';
}
