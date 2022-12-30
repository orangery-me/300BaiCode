#include <iostream>
#include <map>
using namespace std;
 
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        const int nmax=100000;
        int demA[nmax]={};
        int demB[nmax]={};

        for (char it: ransomNote)
            demA[it]++;
        
        for (char it:magazine )
            demB[it]++;

        for (char it: ransomNote)
           if (demA[it] > demB[it])
           return false;

        return true;
    }
};
int main(){
    string ransomNote, magazine;
    Solution p;
    getline(cin,ransomNote);
    getline(cin,magazine);

    cout <<p.canConstruct(ransomNote,magazine);
}