//
//  main.cpp
//  SingleNumber
//
//  Created by Đinh Bảo Châu Thi on 1/3/23.
//

#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for (int it:nums)
            ans=ans^it;
        return ans;
    }
};
    int main(int argc, const char * argv[]) {
        Solution p;
        int x=5^4^5;
        cout <<x;
        return 0;
    }
