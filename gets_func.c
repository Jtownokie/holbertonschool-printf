int (*get_cs_func(char *s))(char *)
{
	param_cs paramcs[] = {
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (paramcs[i].param != NULL)
	{
		if (*(paramcs[i].param) == *s)
		{
			return (paramcs[i].csfunc);
		}
		i++;
	}
	return (NULL);
}

int (*get_di_func(char *s))(int)
{
	param_di paramdi[] = {
		{"d", print_digit},
		{"i", print_int},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (paramdi[i].param != NULL)
	{
		if (*(paramdi[i].param) == *s)
		{
			return (paramdi[i].difunc);
		}
		i++;
	}
	return (NULL);
}
