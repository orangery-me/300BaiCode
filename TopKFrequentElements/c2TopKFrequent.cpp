#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;

int main(){
    int n; cin>>n;
    vector <int> nums;
    map <int,int> mp;

    for (int i=0; i<n; ++i){
        int x; cin>>x;
        nums.push_back(x);
    }
    int k; cin>>k;

    for (int it: nums){
        mp[it]++;
    }
    priority_queue < pair<int,int> , vector<pair<int,int> > , less <pair<int,int> > > pq;

    for (auto it:mp){
        pq.push( {it.second,it.first} );
    }

    for (int i=0; i<k; ++i){
       
        cout <<pq.top().second<<" ";
        pq.pop();
    }

}
