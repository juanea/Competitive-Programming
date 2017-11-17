#include <bits\stdc++.h>

using namespace std;

int n, k, b, c, a, i;
const int contestLast = 240;

int main()
{
	scanf("%d%d", &n, &k);
	b = contestLast - k;
	for (i = 0; i < n; i++)
	{
		a += 5;
		c += a;
		if (c > b)
			break;
	}
	printf("%d", i);
}