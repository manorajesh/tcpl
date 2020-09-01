int strlen(char s[])
{
	int i;

	i = 0;
	while (s[i] != '\0')
		++i;

	return i;
}

int mainstr(void)
{
	int n;
	
	n = strlen("mano");
	n = strlen("birdee");
}