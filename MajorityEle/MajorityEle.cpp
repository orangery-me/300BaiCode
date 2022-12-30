#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(),res=0;
        unordered_map <int,int> count;

        for (auto it:nums){
            count[it]++;
            if (count[it] >= n/2 && count[it] >count[res]){
            res=it;
            }
        }
        return res;
    }
};

int main(){
    int n;
    cin >>n;
    vector <int> nums;
    for (int i=1; i<=n; ++i){
        int x; cin>>x;
        nums.push_back(x);
    }

    Solution p;
    cout <<p.majorityElement(nums);
}
