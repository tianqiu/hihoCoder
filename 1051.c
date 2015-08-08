#include<stdio.h>
int main()
{
    int i,j;
    int n,m,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x;
        scanf("%d%d",&n,&m);
        int *map;
        map=(int)malloc((n+1)*sizeof(int));
        for(j=0;j<n;j++)
            scanf("%d",&map[j]);
        map[n]=101;
        if(n<=m)
            x=100;
        else
        {
            int tt;
            x=map[m]-1;
            for(tt=0;tt<n-m;tt++)
            {
                if(map[tt+m+1]-map[tt]-1>x)
                    x=map[tt+m+1]-map[tt]-1;
            }
        }
        printf("%d\n",x);
        free(map);
    }
    return 0;
}
