#include <iostream>
using namespace std;

class Solution {
public:

    long long factor(int k, int n){
        long long res=1;
        if (k==0)
        return 1;

        for (int i=1 ;i<=k ;++i,n--)
            res = (res * n)/i;

        return res;
    
    }
    long long climbStairs(int n) {

        long long sum=0;
        for (int i=0; i<=n/2; ++i){
            int k=(n-i);
            sum+= factor(i,k);

        }
        return sum;
    }
};

int main(){
    int n; cin >>n;
    Solution p;
    cout <<p.climbStairs(n)<<endl;
}