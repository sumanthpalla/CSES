#include<bits/stdc++.h>
using namespace std;
 
 
void subarray_sum(long long int arr[], int n){

    // kadane's alogirthm
    long long int currmax = arr[0], maxsum = arr[0];
    for(int i=1;i<n;i++){

        // choose the current maximum between previous sum + arr[i] or arr[i]
        currmax = max(currmax+arr[i],arr[i]);
        //update maxsum
        maxsum = max(maxsum,currmax);
    }
    cout<<maxsum;
}
 
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    subarray_sum(arr,n);
}