#include<bits/stdc++.h>
using namespace std;
//typedef long long ll;
//typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a,b,sizeof(a))
const int mx=1e5+123;
int a[mx];
int cnt[1000123];
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
         mem(cnt,   0);//globally declare korle testcase a ager data clear howar jonno
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            cnt [a[i]]++;
        }
        int q;
        cin>>q;
        while(q--)
        {
            int v;
            cin>>v;
            cout <<cnt[v]<<endl;
        }
    }
    return 0;
}
