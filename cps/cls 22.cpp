#include<stdio.h>
const int mx=123;
int a[mx] [mx];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int x;
    scanf("%d",&x);
    bool isExist=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==x){
                isExist=true;
                break;
            }
        }
        if(isExist ) break;

    }
    if(isExist)printf("will not take number\n");
    else printf("will take number\n");

}
