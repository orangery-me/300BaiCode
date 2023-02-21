#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution{
public:
    string minWindow(string s, string t){

        vector <int> mp(128,0);
        int l = 0, r = 0, count = t.size(), ans = INT_MAX;
        int minl = 0;
        for (auto it : t)
            mp[it]++;

        while (r < s.length()){
            if (mp[s[r]] > 0)
                count--;

            mp[s[r]]--;
            r++;
            while (count == 0){
                if ((r-l) <ans){
                    minl = l;
                    ans = min(ans,r-l);
                }
                mp[s[l]]++;
                if (mp[s[l]] > 0)
                    count++;
                l++;
            }
        }
        if (ans!= INT_MAX)
        return s.substr(minl, ans);
        return "";
    }
};



int main(){
    string s,t;
    getline(cin,s);
    getline(cin,t);
    Solution p;
    cout <<p.minWindow(s,t)<<endl;
}