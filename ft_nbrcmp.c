int	ft_nbrcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	{
		while (s1[i] == s2[i])
		{
			if (s1[i] == '\0' || s2[i] == '\0')
				break ;
			i++;
		}
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
int ft_nbrcmp(const char *s1, const char s2)
{
    int i;
    int j;

    i = 1;
    j = 0;
    if (s[i] == '+')
    {
        if (!s2[j] == '+')
            i++;
    }
    else
    { 
        if (s2[j] == '+')
            j++;
    }
    while (!s1[i] == '\0' && !s2[j] == '\0' && s1[i] == s2[j])
    {
        i++;
        j++;
    }
    return ((unsigned char)s1[i] - (unsigned char)s2[j]);
}
*/