#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> nums;
int k;
bool check()
{
    unordered_map <int,int> m(-1);
    int i = 0, j = 0;
    while (j < nums.size())
    {
        if (nums[i] == nums[j] && (j-i)>0 && (j-i) <=k)
        {
            cout << i << " " << j;
            return true;
        }
        if (j - i < k){
            j++;
            continue;
        }
        if ( j - i == k)
            i++;
        
    }
    while (i<nums.size()-1){
        if (nums[i] == nums[nums.size()-1]){
            cout <<i<<" "<<j;
            return true;
        }
        i++;
    }
    cout <<"Khong co";
    return false;
}

int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cin >> k;
    check();
}
