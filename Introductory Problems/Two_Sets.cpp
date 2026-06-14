#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<numeric>
using namespace std;


void solve(){
    
    int n;
    cin>>n;
    
    // construct an array from 1 to n;
    int a[n];
    for(int i = 1; i<=n;i++)a[i-1] = i;
    vector<int>bucket1;
    vector<int>bucket2;
    for(int i = 0; i<= (n/2)-1; i++)
    {
        // push ai in bucket1 and a(n-i) in bucket2
        
        if(!(i&1))
        {
            bucket1.push_back(a[i]);
            bucket2.push_back(a[n-i-1]);
        }
        
        else {
            bucket1.push_back(a[n-i-1]);
            bucket2.push_back(a[i]);
        }
    }
    
    bucket1.push_back(a[n/2]);
    

    if(accumulate(bucket1.begin(),bucket1.end(),0) == accumulate(bucket2.begin(), bucket2.end(),0))
    {
        cout<<"YES\n";
        cout<<bucket1.size()<<"\n";
        for(int i: bucket1) cout<<i<<" ";
        cout<<"\n";
        cout<<bucket2.size()<<"\n";
        for(int i: bucket2)cout<<i<<" ";
    }
    else 
    {
        cout<<"NO\n";
    }
    
    // 
    
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}