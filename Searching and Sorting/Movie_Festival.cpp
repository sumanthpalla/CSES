#include<bits/stdc++.h>
using namespace std;

static bool cmp(pair<int,int>&a, pair<int,int>&b){
    // if(a.second == b.second)return a.first < b.first;
    return a.second < b.second;
}
 
void movie_festival(){

    // Input 
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v[i] = {a,b};
    }
    sort(v.begin(),v.end(),cmp);

    // Which movie to watch first?, the movie with least ending time must be watched first to minimize our time loss
    //you can only watch a movie if end time of previous move < start time of present movie
    int total = 0 , curr_end = 0;
    for( auto p: v)
    {
        if(p.first >= curr_end)
        {
            curr_end = p.first;
            total++;
        }
    }
    cout<<total<<"\n";
}
 
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    movie_festival();
}