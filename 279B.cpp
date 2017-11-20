#include <bits/stdc++.h>

using namespace std;

long long a, i,j, n, t, arr[100010], flag, maxBooks, sum, pointerOne, pointerTwo;

int main()
{
	scanf("%lld%lld", &n, &t);
	for (i = 0; i < n; i++)
		scanf("%lld", &arr[i]);
	
	while (pointerTwo < n)
	{
		if (sum + arr[pointerTwo] > t )
		{
			sum -= arr[pointerOne];
			if (maxBooks < pointerTwo - pointerOne)
				maxBooks = pointerTwo - pointerOne;
			pointerOne++;
		}
		else
		{
			sum += arr[pointerTwo];
			pointerTwo++;
		}
	}
	if (maxBooks < pointerTwo - pointerOne)
		maxBooks = pointerTwo - pointerOne;
	printf("%lld", maxBooks);
}