#include <stdio.h>
#include <string.h>
char names[3][20];
int grades[3];
int main()
{
    FILE * fin=fopen("file.txt","r+");
    char name[20];
    int grade;
    for(int i=0;i<3;i++)
    {
        fscanf(fin,"%s",name);
        fscanf(fin,"%d",&grade);
        strcpy(names[i],name);///把名字，複製到names[i]陣列
        grades[i]=grade;///把分數，進入grades[i]陣列
    }
    for(int i=0;i<3;i++)
    {
        printf("%s %d\n",names[i],grades[i]);
    }
}
