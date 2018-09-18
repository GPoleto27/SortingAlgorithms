#include <stdio.h>

void swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

int main()
{
	register int i, j;
	int v[] = {6, 7, 8, 4, 5, 2, 0};
	int n = sizeof(v)/sizeof(int);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n-i-1; j++)
			if (v[j] > v[j+1])
				swap(&v[j], &v[j+1]);
	}
	for (i = 0; i < n; i++)
		printf("%d ", v[i]);
	printf("\n");
	return 0;
}
