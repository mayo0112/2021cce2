#include <stdio.h>
#include <string.h>
char names[3][20];
int grades[3];
int main()
{
    char name[20];
    int grade;
    for(int i=0;i<3;i++)
    {
        scanf("%s",name);
        scanf("%d",&grade);
        strcpy(names[i],name);///��W�r�A�ƻs��names[i]�}�C
        grades[i]=grade;///����ơA�i�Jgrades[i]�}�C
    }
    FILE * fout=fopen("file.txt","w+");
    for(int i=0;i<3;i++)
    {
        printf("%s %d\n",names[i],grades[i]);
        fprintf(fout,"%s %d\n",names[i],grades[i]);
    }
}
