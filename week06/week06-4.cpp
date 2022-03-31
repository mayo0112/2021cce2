#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char tree[1000000][40];
int compare(const void *p1, const void *p2)
{
	char*s1=(char*) p1;
	char*s2=(char*) p2;
	return strcmp(s1,s2);
}
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
		qsort(tree, N,   40   , compare);
		//陣列 N個 單位大小 比大小函式
		for(int i=0;i<N;i++)
		{
		printf("%s %.4f\n",tree[i],100.0/N);
		}
	}
}
