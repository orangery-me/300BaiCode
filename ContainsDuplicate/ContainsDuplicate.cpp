#include <iostream>
#include <vector>
#include <unordered_map>

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
