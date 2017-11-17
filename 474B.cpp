#include <bits\stdc++.h>

using namespace std;
int i, j, n, m, arr[100000], arr2[100000], cont;

int main()
{
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	scanf("%d", &m);
	for (i = 0; i < m; i++)
		scanf("%d", &arr2[i]);
	while (m--)
	{
		for (i = 0; i < arr[j]; i++)
		{
			cont++;
			if (arr2[j] == cont)
			{
				printf("%d\n", j+1);
				break;
			}
		}
		j += 1;
	}
}