#include <stdio.h>

void swap(int *a, int *b)
{
	*a ^= *b ^= *a ^= *b;
}

int main()
{
	register int i, j;
	int v[] = {6, 7, 8, 4, 5, 2, 0};
	int n = sizeof(v)/sizeof(int);
	for (i = 0; i < n; i++)
	{
		j = i;
		while(j-1 >= 0 && v[j] < v[j-1])
		{
			swap(&v[j], &v[j-1]);
			j--;
		}
	}

	for (i = 0; i < n; i++)
		printf("%d ", v[i]);

	printf("\n");
	return 0;
}