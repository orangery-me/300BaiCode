//
//  main.cpp
//  MoveZero
//
//  Created by Đinh Bảo Châu Thi on 1/3/23.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void swap(int &a, int &b){
        int temp=a;
        a=b;
        b=temp;
    }
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0, j=1;
        while (j < n){
            
            if (nums[i] ==0 && nums[j] !=0){
                swap (nums[i],nums[j]);
                i++;
                j++;
            }
            else
                if ( nums[i] ==0 && nums[j]==0 )
                    j++;
                else {
                    i++;
                    j++;
                    
                }
        }
    }
};
int main(int argc, const char * argv[]) {
    vector <int> nums;
    int n; cin>>n;
    for (int i=0; i<n; ++i){
        int x; cin>>x;
        nums.push_back(x);
    }
    Solution p;
    
    p.moveZeroes(nums);
    for (int i=0; i<n; ++i)
        cout <<nums[i]<<" ";
}
