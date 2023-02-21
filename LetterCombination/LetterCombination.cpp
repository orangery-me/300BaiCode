#include <iostream>
#include <vector>
using namespace std;

string digits;
// int so_visited[5] = {};
int chu_visited[200];
string res;
int n;
string v[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void Try(int i)
{
    int so = (digits[i] - '0');
    
    for (auto j: v[so])
    {
        res += j;

        if (i < n - 1)
            Try(i + 1);
        
        if (res.size() ==n)
            cout <<res<<endl;
        res.pop_back();
    }
   // res.pop_back();
}
int main()
{
    cin>>digits;
    n=digits.size();
    // cout <<n<<endl;
    // cout<<endl;
    Try(0);

}