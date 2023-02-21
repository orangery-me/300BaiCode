#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,nmax=0,res=0;
        vector <int> m(128,0);
        while (r< s.length()){
            m[r]++;
            nmax=max(nmax,m[r]);
            // bien nmax luu lai so lan xh cua pt xh nhieu nhat
            if (r-l+1 - nmax >k){
            // neu so phan tu phai thay > k
            // dich window sang trai
                m[l]--; 
                l++;
            }
            r++;
        }
        return (s.length()-l);
    }
};
int maint(){
    Solution p;
    string s; int k;
    getline(cin,s);
    cin>>k;
    cout <<p.characterReplacement(s,k)<<endl;

}