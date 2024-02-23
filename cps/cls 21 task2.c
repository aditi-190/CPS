#include<stdio.h>
const int mx=100123;
int a[mx];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&n);
    for(int i=1,j=n;i<j;i++,j--)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;
}

