/**
 * _isalpha - returns 1 if character is alphabet
 * @c: character to be checked
 * Return: 1 if true
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
