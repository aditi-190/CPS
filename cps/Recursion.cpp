#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int  fact (int n)
{
    cout<<n :<<endl;
    if(n==0)
    {
        return 1;
    }
    int result =n* fact(n-1);
    return result;
}
int main ()
{
    optimize();
    cout <<fact (5)<<endl;

    return 0;
}
