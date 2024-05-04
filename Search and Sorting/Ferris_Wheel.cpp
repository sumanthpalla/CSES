#include<bits/stdc++.h>
using namespace std;
 
 
void ferris_wheel(){
    // input from the stream
    int n,x;
    cin>>n>>x;
    int children[n];
    for(int i=0;i<n;i++)cin>>children[i];


    // sort the children to follow the strategy of placing lighter and a heavier child in the same gandola
    sort(children,children+n);

    // gandoals account for the number of gandolas where lighter and a heavier child are made to sit
    int gandolas = 0, left = 0, right = n-1;
    while (left < right )
    {
        /* code */

        // optimum way to place two children in a gandola is place both the lighter child and heavier child if and only if the total weight < x
        if(children[left] + children[right] > x)right--;
        else{
            left++;
            right--;
            gandolas++;
        }
    }
    // Number of gandolas required = Children - gandolas
    cout<<n-gandolas<<"\n";
}
 
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ferris_wheel();
}