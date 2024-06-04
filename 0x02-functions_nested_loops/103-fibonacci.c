#include <stdio.h>

int main(void)
{
	int i = 1, j = 2;
	int sum = 0;
	int next;
	int limit = 4000000;

	while (j < limit)
	{
		if (j % 2 == 0)
			sum = sum + j;

		next = i + j;
		i = j;
		j = next;
	}
	printf("%d\n", sum);
	return 0;
}
