/**
 * strcat : appends the src string to the dest string
 * Returns a pointer to the resulting string dest
 * @dest: pointer destination
 * @src: pointer parameter source
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, y = 0, x = 0;

	while (src[i])
		i++;

	while (dest[j])
		j++;

	i += j;

	for (y = j; y < i; y++)
	{
		dest[y] = src[x];
		x++;
	}

	return (dest);
}
