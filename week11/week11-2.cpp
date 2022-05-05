#include <stdio.h>
char line[100];
int main()
{
    int T;
    FILE * fin=fopen("input.txt","r");
    fscanf(fin,"%d",&T);
    printf("你讀到了: %d\n",T);
    while(fgets(line,100,fin))
    {
        printf("讀到了=%s=\n",line);
    }
}
