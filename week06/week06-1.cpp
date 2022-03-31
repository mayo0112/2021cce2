#include <stdio.h>
char tree[10000][40];
int main()
{
	int a,t;
	scanf("%d\n\n",&a);
	for(t=1;t<=a;t++)
	{
		int N=0;
		while(gets(tree[N]))
		{
			if(tree[N][0]==0) break;
			N++;
		}
		if(t>1) printf("\n");
		printf("Test Case %d: %d lines\n",t,N);
	}
	return 0;
}
