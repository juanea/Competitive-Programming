#include <bits\stdc++.h>

using namespace std;

int a, i, n, t, arr[1010], flag;

int main()
{
	scanf("%d%d", &n, &t);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	sort(arr, arr + n);

	for (i = 0; i < n; i++)
	{
		a += arr[i];
		if (a > t)
		{
			flag = 1;
			break;
		}
		else if (a == t)
		{
			flag = 2;
			break;
		}
		else if (i - 1 == n || flag == 0 && a < t)
			flag = 3;

	}

	if (flag == 1)
		printf("%d", i);
	else if (flag == 2)
		printf("%d", i + 1);
	else if (flag == 3)
		printf("%d", 1);
	else
		printf("%d", 0);
}