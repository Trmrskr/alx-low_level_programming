
/**
 * _strcpy - copies exact copy of a string
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		*(dest + i) = *(src + i);
		i++;
	} while (*(src + i) != 0);

	return (dest);
}
