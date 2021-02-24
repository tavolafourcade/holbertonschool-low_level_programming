/**
 * _strstr - function that locates a substring.
 * @haystack: string to search through
 * @needle: string to search for
 * Description:
 * Return: pointer to the beginning of the located substring,
 * or 'NULL' if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *i, *j;

	while (*haystack != '\0')
	{
		i = haystack;
		j = needle;
		while (*j == *haystack && *haystack != 0 && *j != 0)
		{
			haystack++;
			j++;
		}
		if (*j == 0)
		{
			return (i);
		}
		haystack = i + 1;
	}

	return (0);
}
