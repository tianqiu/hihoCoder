#include <string.h>
#include <stdio.h>
char map[220]={0};
char mapfind[220]={0};
int a[200]={0};
int len;
int k;
void find();
int main(void)
{
    int i;
    while(gets(map)!=NULL)
    {len=strlen(map);
     for(i=0; i<len; i++)
    {
        mapfind[i]=tolower(map[i]);
    }
    find();
    int kk=0;
    for(i=0;i<len;)
    {
        if(i!=a[kk])
        {
            printf("%c",map[i]);
            i++;
        }
        else
        {
            printf("fjxmlhx");
            kk++;
            i=i+9;
        }
    }
    printf("\n");
    }
    return 0;
}
void find()
{
    a[0]=-1;
    k=0;
    int i,j;
    char t[10]="marshtomp";
    char t2[10];
    for(i=0;i<len-8;i++)
    {
        for(j=0;j<9;j++)
            t2[j]=mapfind[i+j];
        t2[9]='\0';
        if(strcmp(t,t2)==0)
            {a[k]=i;k++;}
    }
}
