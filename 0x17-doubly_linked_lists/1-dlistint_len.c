
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		++len;
		h = h->next;
	}
	return (len);
}
