char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	int = 0;
	while(dest[i])
		i++;
	j = 0;
	while(src[j] && (j < nb))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
