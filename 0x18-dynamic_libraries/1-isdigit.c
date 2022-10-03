/**
 * _isdigit - check is character is a digit
 * @c: argument
 * Return: 1 if true, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
