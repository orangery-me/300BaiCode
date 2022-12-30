#include <iostream>
using namespace std;

class Solution {
public:
    int cv(char a){
        if (a=='I') return 1;
        if (a=='V') return 5;
        if (a=='X') return 10;
        if (a=='L') return 50;
        if (a=='C') return 100;
        if (a=='D') return 500;
         return 1000;
    }
    int romanToInt(string s) {
        int n=s.size(),sum=0;
        for (int i=0; i<n-1; ++i ) {
            if ( cv(s[i]) <cv(s[i+1]) )
            sum-= cv(s[i]);
            else 
            sum+= cv(s[i]);
            
        }
        sum+=cv(s[n-1]);
        return sum;
    }
};

int main(){
    string s;
    getline(cin,s);
    Solution p;
    cout <<p.romanToInt(s)<<endl;
}