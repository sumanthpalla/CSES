#include<bits/stdc++.h>
using namespace std;
 
 
void sum_of_three_values(vector<pair<int,int>>arr, int n, int x)
{

    // Idea is of like two sum, where we try to find the integers where left and right adds upto x
    sort(arr.begin(),arr.end());

    for(int i = 0; i<n-2;i++)
    {
            int l = i+1, r = n-1;

        // like as two sum with sorted array
            
            while(l < r)
            {
                int temp_sum = arr[i].first + arr[l].first + arr[r].first;
                if(temp_sum == x)
                {
                    cout<<arr[i].second+1<<" "<<arr[l].second + 1 <<" "<<arr[r].second + 1<<"\n";
                    return ;
                }
                else if (temp_sum > x)r--;
                else l++;
            }

    }

    // If we don't find any two values that sums upto x, print impossible and return
    cout<<"IMPOSSIBLE\n";
    return;
}
 
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,x;
    cin>>n>>x;

    // special datastructure to store both the index and value. (we can go for map too!)
    vector<pair<int,int>>arr(n);

    //input from stream
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        arr[i] = {p,i};
    }

    // calling function
    sum_of_three_values(arr,n,x);
}