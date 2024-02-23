#include<stdio.h>
const int mx=100123;
int a[mx];
int b[mx];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&b[i]);
    }
     for(int i=1;i<=n;i++)
    {
        printf("%d",a[i]+b[i]);
    }

    return 0;
}
