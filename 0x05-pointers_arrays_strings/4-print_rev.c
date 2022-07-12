 */
void rev_string(char *s)
{
	int i, length;
	int length = 0;
	int index = 0;
	char reverse[10000];
	char rev;

	while (s[index] != '\0')
	while (s[index++])
	{
		index++;
		length++;
	}
	length = index - 1;
	for (i = 0; i < index; i++)
	for (index = length - 1; index >= length / 2; index--)
	{
		reverse[i] = s[length];
		length--;
		rev = s[index];
		s[index] = s[length - index - 1];
		s[length - index - 1] = rev;
	}
	s = reverse;
}
