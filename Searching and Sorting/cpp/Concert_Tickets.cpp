#include<bits/stdc++.h>
using namespace std;
 
void concert_tickets(){
    int n,m;
    cin>>n>>m;
    vector<int>concert_prices(n),customer_prices(m);

    for(int i=0;i<n;i++)cin>>concert_prices[i];
    for(int i=0;i<m;i++)cin>>customer_prices[i];

    // for every customer price, find a price in concert_price that is greater than customer price.
    // if you find the ticket price is lower, then print -1
    // else find the price at which the customer is willing to pay 

    map<int,int>mp;
    for(int i: concert_prices)mp[i]++;
    // sort(concert_prices.begin(),concert_prices.end());
    for(int i=0;i<m;i++)
    {
        auto it = mp.upper_bound(customer_prices[i]);
        if(it != mp.begin())
        {
            it--;
            cout<<it->first<<"\n";
            it->second -= 1;
            if(it->second == 0)mp.erase(it);
        }
        else{
            cout<<"-1\n";
        }
    }
}
 
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    concert_tickets();
}