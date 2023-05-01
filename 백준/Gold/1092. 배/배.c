#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b)
{
	return (*(int *)a < *(int *)b ? 1 : -1);
}
int	main(){
	int n, m, i, j, tmp = 0, ret = 0;
	int c[50], b[10000];
	scanf("%d",&n);
	for (i = 0; i < n; i++)
		scanf("%d",&c[i]);
	scanf("%d",&m);
	for (i = 0; i < m; i++)
		scanf("%d",&b[i]);
	qsort(c, n, 4, cmp);
	qsort(b, m, 4, cmp);
	if (c[0] < b[0])
	{
		printf("-1");
		return 0;
	}
	while (tmp < m)
	{
		int q = 0;
		int w = 0;
		while (q < n && w < m)
		{
			if (c[q] >= b[w])
			{
				b[w] =2147000000;
				tmp++;
				q++;
			}
			w++;
		}
		ret++;
	}
	printf("%d\n",ret);
}
