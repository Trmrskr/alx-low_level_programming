/**
 * _strncat - concatenate n string
 * @dest: destination
 * @src: srouce
 * @n: length
 * Return: dest modified
 */

char *_strncat(char *dest, char *src, int n)
{
	*dest = *(src + n);
	return (dest);
}
