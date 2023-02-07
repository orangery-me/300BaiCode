#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = 0; i < n - 2; ++i)
        {
            int j = i + 1, k = n - 1;
            while (j <= k)
            {
                if (nums[j] + nums[k] == -nums[i])
                {
                    res.push_back({nums[i], nums[j], nums[k]});
                    if (nums[j + 1] == nums[j])
                        k++;
                    else
                    {
                        if (nums[j] + nums[k] > -nums[i])
                            k--;
                        if (nums[j] + nums[k] < -nums[i])
                            j++;
                    }
                }
            }

            return res;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    class p;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
}