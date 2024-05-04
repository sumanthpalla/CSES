#include<bits/stdc++.h>
using namespace std;

/* 
@brief: apartments function, which takes 

*/ 
 
void apartments(){
    long long int n,m,k;
    cin>>n>>m>>k;
    long long int desired_size[n], apartment_size[m];
    for(int i=0;i<n;i++)cin>>desired_size[i];
    for(int i=0;i<m;i++)cin>>apartment_size[i];

    // sort size of apartments and desired size of apartments
    // an applicant accepts the apartment, only if its size in [desired_size - k, desired_size +k ]
    sort(desired_size,desired_size+n);
    sort(apartment_size, apartment_size+m);

    // apartments filled 
    int i = 0, j= 0,apartments_filled = 0;
    while(i < n && j<m)
    {
        if(abs(desired_size[i] - apartment_size[j])<=k){
            ++i;
            ++j;
            apartments_filled++;
        }
        else{
            // if the desired apartment is too big, find the next one
            if(desired_size[i] - apartment_size[j] > k) ++j;
            else ++i;
        }
    }
    cout<<apartments_filled<<"\n";
}
 
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    apartments();
}