int	ft_isalpha(int c)
{
	return (((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')) ? 1 : 0); 
}
