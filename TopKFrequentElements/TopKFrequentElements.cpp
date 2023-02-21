#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        map <int,int> mp;
        vector <int> res;

        for (int item:nums){
            mp[item]++;
            // lưu các phần tử riêng biệt ở key và số lần xuất hiện của nó ở value
        }
        // Do không thể sắp xếp map theo value, ta dùng một vector các pair để sắp xếp dễ hơn
        vector <pair<int,int> > v;

        for (auto it:mp){
            v.push_back( {it.second,it.first} );
            // lưu số lần xuất hiện lên trước để sắp xếp
        }
        sort(v.rbegin(), v.rend());
        // for (auto it:v){
        //     cout <<it.second<<" "<<it.first<<endl;
        // }
        for (int j=0; j<k; ++j){
            res.push_back(v[j].second);
        }
        return res;
    }
    
};

int main(){
    int n; cin>>n;
    vector <int> nums;
    for (int i=0; i<n; ++i){
        int x; cin>>x;
        nums.push_back(x);
    }
    int k; cin>>k;
    Solution p;
    for (auto i: p.topKFrequent(nums,k)){
        cout <<i<<" ";
    }
}