#include <iostream>
#include <vector>
#include <deque>
using namespace std;
// c2: o(n)
class Solution {
public:
    vector<int> countBits(int n) {
        // mang dem luu so chu so 1 trong so nhi phan
        vector <int> dem(n+1);
        dem[0]=0;
        
        for (int i=1; i<=n; ++i){
            // vd 7=111; 3=0110 => dem[7]= dem[3]+1;
            // vd 6=110 3=0110 => dem[6]=dem[3]+0;
            dem[i]=dem[i/2]+ i%2;

        }
        return dem;
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
