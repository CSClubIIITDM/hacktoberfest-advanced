#include <stdio.h>
#include<string.h>
#pragma GCC optimize ("Ofast")

void solve()
{
    int t,x=0;
    scanf("%d",&t);
    char o[t][4];
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        int t[n],l[n],h[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d %d %d",&t[i],&l[i],&h[i]);

        }
        int min=m,max=m,ti_1=0,j;
        for(j=0 ;j<n;j++)
        {
            min-=t[j]-ti_1;
            max+=t[j]-ti_1;

            if(min>h[j] || max<l[j])
            {
                break;
            }
            ti_1=t[j];
            min = (min>l[j])? min:l[j];
            max = (max>h[j])? h[j]:max;
        }
        (j==n)? strcpy(o[x++],"YES"):strcpy(o[x++],"NO");
    }
    for(int i=0 ; i<x;i++)
    {
        printf("\n%s",o[i]);
    }
}


int32_t main()
{
    solve();
    return 0;
}