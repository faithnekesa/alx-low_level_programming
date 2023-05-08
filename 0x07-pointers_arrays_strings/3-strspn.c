{
	int i, j;
	int count = 0;
	char *string1;
	char *string2;

	string1 = s;
	string2 = accept;

	i = 0;
	while (string1[i] != '\0')
	{
		j = 0;
		while (string2[j] != '\0')
		{
			if (string2[j] == string1[i])
			{
				count++;
				break;
			}

			j++;
		}
		if (s[i] != accept[j])
		{
			break;
		}

		i++;
	}

	return (count);
}
