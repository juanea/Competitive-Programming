#include <bits/stdc++.h>
using namespace std;
int i,j, ones, zeros, arr[110],k, n, ans;

int main()
{
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	ans = -1;
	for (i = 0; i < n; i++)
	{
		ones = 0;
		zeros = 0;
		for (j = 0; j <= i; j++) 
		{
			if (arr[j] == 0)
			{
				zeros++;
			}
		}
		for (k = i; k < n; k++)
		{
			if (arr[k] == 1)
			{
				ones++;
			}
		}
		ans = max(ans, ones + zeros);
	}

	printf("%d", ans);
}