void (*get_cs_func(char *s))(char *)
{
	param_cs paramcs[] = {
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};
}

void (*get_di_func(char *s))(int)
{
	param_di paramdi[] = {
		{"d", print_digit},
		{"i", print_int},
		{NULL, NULL}
	};
}
