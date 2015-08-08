#include<stdio.h>
int n,m;
char map[210][210]={0};
char map1[4][4]={0};
char map2[4][4]={0};
char map3[4][4]={0};
char map4[4][4]={0};
void change(char map1[4][4],char map2[4][4]);
void find1();
void change(char map1[4][4],char map2[4][4])
{
    map2[1][1]=map1[3][1];
    map2[1][2]=map1[2][1];
    map2[1][3]=map1[1][1];
    map2[2][1]=map1[3][2];
    map2[2][2]=map1[2][2];
    map2[2][3]=map1[1][2];
    map2[3][1]=map1[3][3];
    map2[3][2]=map1[2][3];
    map2[3][3]=map1[1][3];
}

void find1()
{
    int flag1,flag2,flag3,flag4;
    int i,j,nn,mm;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(map[i][j]==map1[2][2])
            {
                flag1=1;
                flag2=1;
                flag3=1;
                flag4=1;
                for(nn=1;nn<4;nn++)
                {
                    for(mm=1;mm<4;mm++)
                    {
                        if(map[i+nn-2][j+mm-2]!=map1[nn][mm])
                            {flag1=0;break;}
                    }
                }
                for(nn=1;nn<4;nn++)
                {
                    for(mm=1;mm<4;mm++)
                    {
                        if(map[i+nn-2][j+mm-2]!=map2[nn][mm])
                            {flag2=0;break;}
                    }
                }
                for(nn=1;nn<4;nn++)
                {
                    for(mm=1;mm<4;mm++)
                    {
                        if(map[i+nn-2][j+mm-2]!=map3[nn][mm])
                            {flag3=0;break;}
                    }
                }
                for(nn=1;nn<4;nn++)
                {
                    for(mm=1;mm<4;mm++)
                    {
                        if(map[i+nn-2][j+mm-2]!=map4[nn][mm])
                            {flag4=0;break;}
                    }
                }
                if(flag1==1||flag2==1||flag3==1||flag4==1)
                {
                    printf("%d %d\n",i,j);
                }
            }
        }
    }
}


int main()
{
    int i,j;

    scanf("%d%d",&n,&m);
    getchar();
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            scanf("%c",&map[i][j]);
        getchar();
    }
    for(i=1;i<4;i++)
    {
        for(j=1;j<4;j++)
            scanf("%c",&map1[i][j]);
        getchar();
    }
    change(map1,map2);
    change(map2,map3);
    change(map3,map4);
    find1();
    return 0;
}
