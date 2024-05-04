#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin>>n;
    int a[n];
    set<int>s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    cout<<s.size()<<"\n";
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}