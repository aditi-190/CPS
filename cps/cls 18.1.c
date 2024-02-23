#include<stdio.h>
int main()
{
    while(1){
    int n,m;
    scanf("%d%d",&n,&m);
    if(n==0 && m==0) break;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
        printf("#");
        }
        printf("\n");
    }
    printf("\n");
    }
    return 0;
}
