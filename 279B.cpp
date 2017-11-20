#include <bits/stdc++.h>

using namespace std;

long long a, i,j, n, t, arr[100010], flag, maxBooks, sum, pointerOne, pointerTwo;

int main()
{
	scanf("%lld%lld", &n, &t);
	for (i = 0; i < n; i++)
		scanf("%lld", &arr[i]);
	
	for (i = 0; i < n; i++)
	{
		sum = 0;
		for (j = i; j < n; j++)
		{
			if (sum + arr[j] > t)
				break;
			sum += arr[j];
		}
		if (maxBooks < j - i)
			maxBooks = j - i;
	}

	printf("%lld", maxBooks);
}