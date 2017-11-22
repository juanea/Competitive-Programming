#include <bits/stdc++.h>

using namespace std;

long long i, j, n, k;

int main()
{
	scanf("%lld%lld", &n, &k);
	j = 1;
	for (i = 1; i <= n; i++)
	{
		j *= 2;
		if ((k - j / 2) % j == 0)
		{
			printf("%lld", i);
			break;
		}
	}
}