#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    string res;
    vector <string> ans;
    void Try(int i, string digit,string v[], int n)
    {
        if (i==n){
            ans.push_back(res);
            return;
        }
        // nếu đã thêm tới chữ cuối cùng, thêm res vào vector.
        int so = (digit[i] - '0');
        for (char j : v[so])
        {
            res += j;
            Try(i + 1,digit,v,n);
            // Sau khi đã thêm chữ thứ i vào res thì tiến hành thêm chữ thứ i+1
            res.pop_back();
        }
        
    }

    vector<string> letterCombinations(string digits)
    {
        string v[10] = {"","","abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        int n=digits.size();
       
        if (n!=0)
        Try(0,digits,v,n);
        return ans;
    }
};

int main(){
    string digits;
    cin>>digits;
    Solution p;
    for (auto it: p.letterCombinations(digits)){
        cout <<it<<endl;
    }
}