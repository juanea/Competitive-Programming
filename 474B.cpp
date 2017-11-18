#include <bits/stdc++.h>

using namespace std;
int i, j, n, m, arr[100000], a, cont, l, r, num;

int binarySearch(int x)
{
	l = 0;
	r = n - 1;
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (arr[m] == x)
			return m;
		else if (arr[m] > x)
		{
			num = m;
			r = m - 1;
		}
		else
			l = m + 1;
	}
	return num;
}

int main()
{
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	scanf("%d", &m);
	for (i = 1; i < n; i++)
		arr[i] += arr[i - 1];
	for (i = 0; i < m; i++) 
	{
		scanf("%d", &a);
		printf("%d\n", binarySearch(a)+1);
	}
}