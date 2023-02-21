#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map <char,int> m;
        int i=0,j=0,ans;

        while (i<s.length()){
            if (m.count(s[i]) != 0){
                if (m[s[i]] >= j){
                    j=m[s[i]]+1;
                }    
            }
            m[s[i]]=i;
            ans=max(ans,(i-j+1));
            i++;
        }
   //     cout <<ans;
        return ans;
    }
};
int main(){
    Solution p;
    string s;
    getline(cin,s);
    cout<<p.lengthOfLongestSubstring(s);
}