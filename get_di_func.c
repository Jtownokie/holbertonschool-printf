int (*get_di_func(char *s))(int)
{
	param_t params[] = {
		{"d", print_digit},
		{"i", print_int},
		{NULL, NULL}
	};
}
