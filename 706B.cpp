#include <bits/stdc++.h>
//http://codeforces.com/problemset/problem/706/B
using namespace std;

int a, i, n, x, q, m, arr[100000], lowerBound, upperBound, num, midPoint;

int binarySearch(int x)
{
	if (x < arr[0])
		return 0;
	lowerBound = 0;
	upperBound = n - 1;
	int returnVal = 0;
	while (lowerBound <= upperBound)
	{
		midPoint = (upperBound + lowerBound) / 2;
		if (arr[midPoint] <= x)
		{
			lowerBound = midPoint + 1;
			returnVal = midPoint;
		}
		else
			upperBound = midPoint - 1;
	}
	
	return returnVal+1;
}

int main()
{
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	sort(arr, arr + n);
	scanf("%d", &m);
	for (i = 0; i < m; i++)
	{
		scanf("%d", &a);
		printf("%d\n", binarySearch(a));
	}
}