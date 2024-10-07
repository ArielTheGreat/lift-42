int	ft_isascii(int character_number)
{
	if (character_number >= 0 && character_number <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
