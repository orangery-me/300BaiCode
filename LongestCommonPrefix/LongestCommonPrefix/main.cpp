//
//  main.cpp
//  LongestCommonPrefix
//
//  Created by Đinh Bảo Châu Thi on 1/3/23.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res;
        int i=0;
        if (strs.size()==1)
            return strs[0];
        while (i< strs[i].size()){
            char common=strs[0][i];
            for (string it:strs){
                if (it[i] != common || it[i] == 'o' || it[i] == 'a' || it[i] == 'u' || it[i] =='e'|| it[i]=='i')
                    return res;
                    
            }
            res+=common;
            i++;
        }
        return res;
    }
};

int main(int argc, const char * argv[]) {
    Solution p;
    vector <string> strs;
    int n; cin>>n;
    cin.ignore();
    for (int i=0; i<n; ++i){
        string str;
        getline(cin,str);
        strs.push_back(str);
    }
    cout <<p.longestCommonPrefix(strs);
    return 0;
}
