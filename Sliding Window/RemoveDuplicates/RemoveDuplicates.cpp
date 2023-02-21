#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int p=0;
        for (int i=0; i<nums.size(); ++i){
            if (nums[p] !=val)
               p++;
            else{
                if (nums[i] !=val)
                    {
                        swap(nums[i],nums[p]);
                        p++;
                    }
            }
        }
        return p;
    }
};
int main(){
    Solution p;
    vector <int> nums;
    int n; cin>>n;

    for (int i=0; i<n; ++i){
        int x; cin>>x;
        nums.push_back(x);
    }

    int val; cin>>val;
    int t=p.removeElement(nums,val);
    cout <<t<<endl;
    for (int i=0; i<t ;++i)
    cout <<nums[i]<<" ";
}