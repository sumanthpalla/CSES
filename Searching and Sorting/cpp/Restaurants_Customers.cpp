#include<bits/stdc++.h>
using namespace std;
 
void restaurant_customers(){

    // Input 
    int n;
    cin>>n;
    int arrival[n], departure[n];
    for(int i=0;i<n;i++)
    {
        cin>>arrival[i]>>departure[i];
    }

    // Sort the arrival and departure in ascending order
    sort(arrival,arrival+n);
    sort(departure,departure+n);

    // if arrival time of ith person is less than departure time, then, we increase the count
    // else we decrease the currcustomer count
    int maxcustomers = 0, currcustomers = 0, i = 0, j  = 0;
    while( i < n && j < n)
    {
        if(arrival[i] <= departure[j])
        {
            currcustomers+=1;
            i++;
        }
        else{
            currcustomers-=1;
            j++;
        }
        maxcustomers = max(currcustomers,maxcustomers);
    }
    cout<<maxcustomers<<"\n";
}
 
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    restaurant_customers();
}