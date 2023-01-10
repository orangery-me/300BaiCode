//
//  main.cpp
//  Squares_Of_SortedArray
//
//  Created by Đinh Bảo Châu Thi on 1/9/23.
//

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l=0, r=nums.size()-1;
        while (l<r){
            if (fabs(nums[l]) <= fabs(nums[r]) )
                r--;
            else{
                int temp= nums[l];
                nums.erase(nums.begin()+l);
                nums.insert(nums.begin()+r, temp);
                
            }
        }
        
        for (int i=0; i<nums.size(); ++i)
            nums[i]=nums[i]*nums[i];
        return nums;
    }
};


int main(int argc, const char * argv[]) {
    int n; cin>>n;
    vector <int> nums;
    for (int i=0; i<n; ++i){
        int x; cin>>x;
        nums.push_back(x);
    }
    Solution p;
    for (auto it: p.sortedSquares(nums))
        cout <<it<<" ";
}
