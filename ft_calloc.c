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
