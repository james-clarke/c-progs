#include <stdio.h>

// converts s to int
int atoi(char s[])
{
	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}

int main()
{
	int i;
	i = atoi("A");
	
	printf("%i\n", i);

	return 0;
}
