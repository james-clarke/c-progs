#include <stdio.h>

#define IN    1
#define OUT   2

int main()
{
	int c, nw, state;

	state = OUT;
	nw = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}

	printf("Line count: %d\n", nw);
	
	return 0;
}
