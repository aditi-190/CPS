#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const int mx=1e5+123;
int a[mx];
int main()
{
    optimize();
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    reverse(a+3 ,a+8);
    for(int i=0;i<n;i++) cout <<a[i]<<" ";
    cout <<endl;

    return 0;
}
