#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=100123;
int a[mx];
ll presum[mx];
int main()
{
    optimize();
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
        int q;
        cin>>q;
        for(int i=0;i<n;i++)
        {
            presum[i]=presum[i-1]+a[i];

        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            cout<<(presum[r]-presum[l-1])<<endl;
        }
        return 0;
    }

