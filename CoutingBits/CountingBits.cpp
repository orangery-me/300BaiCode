#include <iostream>
#include <vector>
#include <deque>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> res={0,1};

        deque <int> now;
        now.push_back(1);
        int count=1;
       for (int i=2; i<=n; ++i){
                while (now.back() ==1){
                    now.pop_back();
                    now.push_front(0);
                    count--;
                }
                
                now.push_front(1);
   
                count++;
                while (!now.empty()){
                    int x=now.back();
                    now.push_front(x);
                    now.pop_back();
                }
            

        }
        res.push_back(count);
        return res;
    }
};
int main(){
    int n; cin>>n;
    Solution p;

    for (int it: p.countBits(n) ){
        cout <<it<<" ";
    }
    cout <<endl;
}