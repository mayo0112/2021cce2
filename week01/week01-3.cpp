#include <stdio.h>
int main()
{
    char line[2000];
    scanf("%s",line);
    for(int i=0;i<2000;i++)
    {
        if(line[i]=='2') printf("§ä¨ì2\n");
    }
    return 0;
}
