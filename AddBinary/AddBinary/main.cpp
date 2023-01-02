//
//  main.cpp
//  AddBinary
//
//  Created by Đinh Bảo Châu Thi on 1/1/23.
//

#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    
    string reverse(string a){
        string x;
        int n=a.length();
        for (int i=n-1; i>=0; --i)
            x=x+a[i];
        return x;
            
    }
    int cv(char x){
        if (x=='1') return 1;
        return 0;
    }
    string addBinary(string a, string b) {
        a=reverse(a);
        b=reverse(b);
        
        string res;
        int nsize=max(a.size(),b.size());
        
        int x, nho=0;
        for (int i=0; i<=nsize; ++i){
            // Kiem tra lieu co them mot chu so nua vao truoc hay khong
            if (i==nsize && nho==0)
                continue;
            
            x=cv(a[i]) + cv(b[i]) +nho;
            nho =x/2;
            res+=(char)(x%2 + 48);
            
        }
        return reverse(res);
    }
};
int main(int argc, const char * argv[]) {
    string a,b;
    getline(cin,a);
    getline(cin,b);
    Solution p;
    cout<<p.addBinary(a, b);
}
