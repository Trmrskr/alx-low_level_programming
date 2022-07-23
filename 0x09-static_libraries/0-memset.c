/**
 * _memset - A  function that fills the memory with constant byte
 * @s: the array to be filled with byte
 * @b: the byte with which to fill the array
 * @n: size of address spaces to fill with byte
 * Return: a pointer to the string s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
